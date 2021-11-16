// length of a time quantum
#define QUANTUM 10

// run the specified task for the following time slice
void run(Task *task, int slice);

void print_stats(float waiting_time, float turnaround_time, float response);