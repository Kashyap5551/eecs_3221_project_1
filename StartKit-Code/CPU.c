/**
 * "Virtual" CPU that also maintains track of system time.
 */

#include <stdio.h>

#include "task.h"

// run this task for the specified time slice
void run(Task *task, int slice)
{
    printf("Running task = [%s] [%d] [%d] for %d units\n", task->name, task->priority, task->burst, slice);
}

void print_stats(float waiting_time, float turnaround_time, float response_time)
{
    printf("\nAverage waiting time = %f\n", waiting_time);
    printf("Average turnaround time = %f\n", turnaround_time);
    printf("Average response time = %f\n", response_time);
}