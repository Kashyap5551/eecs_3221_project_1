#include <stdio.h>
#include <stdlib.h>
#include "schedulers.h"
#include "list.h"
#include "cpu.h"

struct node *head = NULL;

int tid = 0;
float turnaround = 0.0;
float waiting = 0.0;
float response = 0.0;

void reverseList()
{
    struct node *prevNode, *curNode;

    if (head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL;

        while (head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode;
    }
}

float waiting_time(struct node *temp)
{
    int sum = 0;

    while (temp != NULL)
    {
        temp->task->waiting = temp->task->turnaround - temp->task->burstBalance;
        sum += temp->task->waiting;
        temp = temp->next;
    }

    return (float)sum / length;
}

float turnaround_time(struct node *temp)
{
    int sum = 0;

    while (temp != NULL)
    {
        sum += temp->task->turnaround;
        temp = temp->next;
    }

    return (float)sum / length;
}

void waiting_time_helper(struct node *temp, int slice)
{
    while (temp != NULL)
    {
        if (temp->task->completed == 0)
        {
            temp->task->waiting += slice;
        }
        temp = temp->next;
    }
}

void turnaround_time_helper(struct node *temp)
{
    temp->task->turnaround = temp->task->burst + temp->task->waiting;
    temp = temp->next;
}

int taskComplete(struct node *temp)
{
    while (temp != NULL)
    {
        if (temp->task->completed == 0)
        {
            return 0;
        }
        temp = temp->next;
    }
    return 1;
}

void schedule()
{
    reverseList();

    struct node *temp;

    while (!taskComplete(head))
    {
        temp = head;
        while (temp != NULL)
        {
            int runtime = 0;
            int burst = temp->task->burst;

            if (burst >= QUANTUM)
            {
                runtime = QUANTUM;
                run(temp->task, runtime);

                temp->task->burst -= QUANTUM;
                // printf("New burst: %d\n", temp->task->burst);

                waiting_time_helper(head, runtime);
                turnaround_time_helper(temp);
            }
            else if (burst == 0)
            {
            }
            else
            {
                runtime = temp->task->burst;
                run(temp->task, runtime);

                temp->task->burst = 0;

                waiting_time_helper(head, runtime);
                turnaround_time_helper(temp);
            }

            if (temp->task->burst == 0)
            {
                temp->task->completed = 1;
            }

            temp = temp->next;
        }
        // printf("Here\n");
    }

    response = waiting = waiting_time(head);
    turnaround = turnaround_time(head);

    print_stats(waiting, turnaround, response);
}

void add(char *name, int priority, int burst)
{
    int turnaround = 0;
    int waiting = 0;
    int response = 0;

    Task task = {
        .name = name,
        .priority = priority,
        .burst = burst,
        .burstBalance = burst,
        .tid = tid,
        .completed = 0,
        .turnaround = turnaround,
        .waiting = waiting,
        .response = response};

    Task *task_ptr = &task;
    Task *cpy = malloc(sizeof *cpy);
    *cpy = *task_ptr;

    insert(&head, cpy);
    tid++;
}