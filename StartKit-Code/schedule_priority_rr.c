#include <stdio.h>
#include <stdlib.h>
#include "schedulers.h"
#include "list.h"
#include "cpu.h"

struct node *head = NULL;
Task *tasks;

int tid = 0;
float turnaround = 0.0;
float waiting = 0.0;
float response = 0.0;

int waiting_times[1024];
int turnaround_times[1024];
int tasks_completed[1024];

int total = 0;

void bubbleSort(struct node *start);
void reverseList();
void taskArray(struct node *start);
void printTasks(Task *tasks, int length);
void mux(Task *tasks, int length);
void rr(Task *tasks, int length);

void printArrays(int *arr, int *arr2)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\t%d\n", arr[i], arr2[i]);
    }
}

void addWaiting(int time)
{
    for (int i = 0; i < length; ++i)
    {
        if (tasks_completed[i] == 0)
        {
            waiting_times[i] += time;
        }
    }
    // printf("\n");
    // printArrays(waiting_times, tasks_completed);
}

void rr(Task *tasks, int length)
{
    int inProgress = length;
    int flag = 0, i = 0;

    while (inProgress > 0)
    {
        Task *task = &tasks[i];
        if (tasks[i].burst < QUANTUM && tasks[i].burst > 0)
        {
            run(task, task->burst);
            tasks_completed[task->tid] = 1;
            addWaiting(task->burst);
            task->burst = 0;
            flag = 1;
        }
        else if (task->burst > 0)
        {
            tasks_completed[task->tid] = 1;
            run(task, QUANTUM);
            task->burst -= QUANTUM;
            if (task->burst == 0)
            {
                flag = 1;
                tasks_completed[task->tid] = 1;
                addWaiting(QUANTUM);
            }
            else
            {
                total += QUANTUM;
                addWaiting(QUANTUM);
                tasks_completed[task->tid] = 0;
            }
        }
        if (task->burst == 0 && flag == 1)
        {
            inProgress--;
            flag = 0;
        }

        i = i == length - 1 ? 0 : i + 1;
    }
}

void mux(Task *tasks, int length)
{
    if (length > 1)
    {
        rr(tasks, length);
    }
    else
    {
        Task *task = &tasks[0];
        run(task, task->burst);
        total += task->burst;

        tasks_completed[task->tid] = 1;
        addWaiting(task->burst);
    }
}

void schedule()
{
    reverseList();
    bubbleSort(head);
    taskArray(head);

    waiting_times[length] = '\0';
    turnaround_times[length] = '\0';
    tasks_completed[length] = '\0';

    int currPriority = tasks[0].priority;
    Task *tempArr = malloc(length * sizeof *tempArr);

    Task *ptr = NULL;

    int idx = 0;
    ptr = tempArr;

    for (int i = 0; i < length; i++)
    {
        if (currPriority != tasks[i].priority)
        {
            mux(tempArr, idx);
            idx = 0;
            free(tempArr);
            tempArr = malloc(length * sizeof *tempArr);
            ptr = tempArr;
            tempArr[idx] = tasks[i];
            idx++;
        }
        else
        {
            tempArr[idx] = tasks[i];
            idx++;
            ptr++;
        }
        currPriority = tasks[i].priority;
    }
    mux(tempArr, idx);

    for (int i = 0; i < length; i++)
    {
        turnaround_times[i] = waiting_times[i] + tasks[i].burstBalance;
    }

    for (int i = 0; i < length; i++)
    {
        waiting += waiting_times[i];
        turnaround += turnaround_times[i];
    }
    waiting /= length;
    turnaround /= length;

    print_stats(waiting, turnaround, 0);
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

void printTasks(Task *tasks, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%s %d %d, ", tasks[i].name, tasks[i].priority, tasks[i].burst);
    }
    printf("\n");
}

void taskArray(struct node *temp)
{
    int i = 0;
    Task *ptr = NULL;
    tasks = malloc(length * sizeof *tasks);

    ptr = tasks;

    while (temp != NULL)
    {
        tasks[i] = *temp->task;
        temp = temp->next;
        ptr++;
        i++;
    }
}

void swap(struct node *a, struct node *b)
{
    Task *temp = a->task;
    a->task = b->task;
    b->task = temp;
}

void bubbleSort(struct node *start)
{
    int swapped;
    struct node *ptr;
    struct node *left = NULL;

    /* Checking for empty list */
    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr = start;

        while (ptr->next != left)
        {
            if (ptr->task->priority < ptr->next->task->priority)
            {
                swap(ptr, ptr->next);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        left = ptr;
    } while (swapped);
}

void reverseList()
{
    struct node *prev, *curr;

    if (head != NULL)
    {
        prev = head;
        curr = head->next;
        head = head->next;

        prev->next = NULL;

        while (head != NULL)
        {
            head = head->next;
            curr->next = prev;

            prev = curr;
            curr = head;
        }

        head = prev;
    }
}