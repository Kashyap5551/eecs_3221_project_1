## Correct Output for Project 2

Considering the following input:

    P0, 9, 35
    P1, 10, 25
    P2, 7, 40
    P3, 6, 20
    P4, 10, 40
    P5, 4, 35
    P6, 10, 20
    P7, 3, 35
    P8, 3, 30
    P9, 4, 30
    P10, 4, 35
    P11, 8, 20
    P12, 4, 20
    P13, 5, 15
    P14, 7, 10
    P15, 1, 25
    P16, 8, 25
    P17, 6, 30
    P18, 2, 40
    P19, 3, 20
    P20, 9, 10
    P21, 7, 5
    P22, 6, 35
    P23, 3, 40
    P24, 9, 30

Here are the correct outputs for the 5 scheduling algorithms:

## FCFS

    Running task = [P0] [9] [35] for 35 units.
    Running task = [P1] [10] [25] for 25 units.
    Running task = [P2] [7] [40] for 40 units.
    Running task = [P3] [6] [20] for 20 units.
    Running task = [P4] [10] [40] for 40 units.
    Running task = [P5] [4] [35] for 35 units.
    Running task = [P6] [10] [20] for 20 units.
    Running task = [P7] [3] [35] for 35 units.
    Running task = [P8] [3] [30] for 30 units.
    Running task = [P9] [4] [30] for 30 units.
    Running task = [P10] [4] [35] for 35 units.
    Running task = [P11] [8] [20] for 20 units.
    Running task = [P12] [4] [20] for 20 units.
    Running task = [P13] [5] [15] for 15 units.
    Running task = [P14] [7] [10] for 10 units.
    Running task = [P15] [1] [25] for 25 units.
    Running task = [P16] [8] [25] for 25 units.
    Running task = [P17] [6] [30] for 30 units.
    Running task = [P18] [2] [40] for 40 units.
    Running task = [P19] [3] [20] for 20 units.
    Running task = [P20] [9] [10] for 10 units.
    Running task = [P21] [7] [5] for 5 units.
    Running task = [P22] [6] [35] for 35 units.
    Running task = [P23] [3] [40] for 40 units.
    Running task = [P24] [9] [30] for 30 units.

    Average waiting time = 338.40
    Average turnaround time = 365.20
    Average response time = 338.40

## SJF
    Running task = [P21] [7] [5] for 5 units.
    Running task = [P14] [7] [10] for 10 units.
    Running task = [P20] [9] [10] for 10 units.
    Running task = [P13] [5] [15] for 15 units.
    Running task = [P3] [6] [20] for 20 units.
    Running task = [P6] [10] [20] for 20 units.
    Running task = [P11] [8] [20] for 20 units.
    Running task = [P12] [4] [20] for 20 units.
    Running task = [P19] [3] [20] for 20 units.
    Running task = [P1] [10] [25] for 25 units.
    Running task = [P15] [1] [25] for 25 units.
    Running task = [P16] [8] [25] for 25 units.
    Running task = [P8] [3] [30] for 30 units.
    Running task = [P9] [4] [30] for 30 units.
    Running task = [P17] [6] [30] for 30 units.
    Running task = [P24] [9] [30] for 30 units.
    Running task = [P0] [9] [35] for 35 units.
    Running task = [P5] [4] [35] for 35 units.
    Running task = [P7] [3] [35] for 35 units.
    Running task = [P10] [4] [35] for 35 units.
    Running task = [P22] [6] [35] for 35 units.
    Running task = [P2] [7] [40] for 40 units.
    Running task = [P4] [10] [40] for 40 units.
    Running task = [P18] [2] [40] for 40 units.
    Running task = [P23] [3] [40] for 40 units.

    Average waiting time = 251.40
    Average turnaround time = 278.20
    Average response time = 251.40
## Round Robin (RR)
    Running task = [P0] [9] [35] for 10 units.
    Running task = [P1] [10] [25] for 10 units.
    Running task = [P2] [7] [40] for 10 units.
    Running task = [P3] [6] [20] for 10 units.
    Running task = [P4] [10] [40] for 10 units.
    Running task = [P5] [4] [35] for 10 units.
    Running task = [P6] [10] [20] for 10 units.
    Running task = [P7] [3] [35] for 10 units.
    Running task = [P8] [3] [30] for 10 units.
    Running task = [P9] [4] [30] for 10 units.
    Running task = [P10] [4] [35] for 10 units.
    Running task = [P11] [8] [20] for 10 units.
    Running task = [P12] [4] [20] for 10 units.
    Running task = [P13] [5] [15] for 10 units.
    Running task = [P14] [7] [10] for 10 units.
    Running task = [P15] [1] [25] for 10 units.
    Running task = [P16] [8] [25] for 10 units.
    Running task = [P17] [6] [30] for 10 units.
    Running task = [P18] [2] [40] for 10 units.
    Running task = [P19] [3] [20] for 10 units.
    Running task = [P20] [9] [10] for 10 units.
    Running task = [P21] [7] [5] for 5 units.
    Running task = [P22] [6] [35] for 10 units.
    Running task = [P23] [3] [40] for 10 units.
    Running task = [P24] [9] [30] for 10 units.
    Running task = [P0] [9] [25] for 10 units.
    Running task = [P1] [10] [15] for 10 units.
    Running task = [P2] [7] [30] for 10 units.
    Running task = [P3] [6] [10] for 10 units.
    Running task = [P4] [10] [30] for 10 units.
    Running task = [P5] [4] [25] for 10 units.
    Running task = [P6] [10] [10] for 10 units.
    Running task = [P7] [3] [25] for 10 units.
    Running task = [P8] [3] [20] for 10 units.
    Running task = [P9] [4] [20] for 10 units.
    Running task = [P10] [4] [25] for 10 units.
    Running task = [P11] [8] [10] for 10 units.
    Running task = [P12] [4] [10] for 10 units.
    Running task = [P13] [5] [5] for 5 units.
    Running task = [P15] [1] [15] for 10 units.
    Running task = [P16] [8] [15] for 10 units.
    Running task = [P17] [6] [20] for 10 units.
    Running task = [P18] [2] [30] for 10 units.
    Running task = [P19] [3] [10] for 10 units.
    Running task = [P22] [6] [25] for 10 units.
    Running task = [P23] [3] [30] for 10 units.
    Running task = [P24] [9] [20] for 10 units.
    Running task = [P0] [9] [15] for 10 units.
    Running task = [P1] [10] [5] for 5 units.
    Running task = [P2] [7] [20] for 10 units.
    Running task = [P4] [10] [20] for 10 units.
    Running task = [P5] [4] [15] for 10 units.
    Running task = [P7] [3] [15] for 10 units.
    Running task = [P8] [3] [10] for 10 units.
    Running task = [P9] [4] [10] for 10 units.
    Running task = [P10] [4] [15] for 10 units.
    Running task = [P15] [1] [5] for 5 units.
    Running task = [P16] [8] [5] for 5 units.
    Running task = [P17] [6] [10] for 10 units.
    Running task = [P18] [2] [20] for 10 units.
    Running task = [P22] [6] [15] for 10 units.
    Running task = [P23] [3] [20] for 10 units.
    Running task = [P24] [9] [10] for 10 units.
    Running task = [P0] [9] [5] for 5 units.
    Running task = [P2] [7] [10] for 10 units.
    Running task = [P4] [10] [10] for 10 units.
    Running task = [P5] [4] [5] for 5 units.
    Running task = [P7] [3] [5] for 5 units.
    Running task = [P10] [4] [5] for 5 units.
    Running task = [P18] [2] [10] for 10 units.
    Running task = [P22] [6] [5] for 5 units.
    Running task = [P23] [3] [10] for 10 units.

    Average waiting time = 465.20
    Average turnaround time = 492.00
    Average response time = 119.40

## Priority

    Running task = [P1] [10] [25] for 25 units
    Running task = [P4] [10] [40] for 40 units
    Running task = [P6] [10] [20] for 20 units
    Running task = [P0] [9] [35] for 35 units
    Running task = [P20] [9] [10] for 10 units
    Running task = [P24] [9] [30] for 30 units
    Running task = [P11] [8] [20] for 20 units
    Running task = [P16] [8] [25] for 25 units
    Running task = [P2] [7] [40] for 40 units
    Running task = [P14] [7] [10] for 10 units
    Running task = [P21] [7] [5] for 5 units
    Running task = [P3] [6] [20] for 20 units
    Running task = [P17] [6] [30] for 30 units
    Running task = [P22] [6] [35] for 35 units
    Running task = [P13] [5] [15] for 15 units
    Running task = [P5] [4] [35] for 35 units
    Running task = [P9] [4] [30] for 30 units
    Running task = [P10] [4] [35] for 35 units
    Running task = [P12] [4] [20] for 20 units
    Running task = [P7] [3] [35] for 35 units
    Running task = [P8] [3] [30] for 30 units
    Running task = [P19] [3] [20] for 20 units
    Running task = [P23] [3] [40] for 40 units
    Running task = [P18] [2] [40] for 40 units
    Running task = [P15] [1] [25] for 25 units

    Average waiting time = 306.40
    Average turnaround time = 333.20
    Average response time = 306.40

## Priority_RR
    Running task = [P1] [10] [25] for 10 units.
    Running task = [P4] [10] [40] for 10 units.
    Running task = [P6] [10] [20] for 10 units.
    Running task = [P1] [10] [15] for 10 units.
    Running task = [P4] [10] [30] for 10 units.
    Running task = [P6] [10] [10] for 10 units.
    Running task = [P1] [10] [5] for 5 units.
    Running task = [P4] [10] [20] for 20 units.
    Running task = [P0] [9] [35] for 10 units.
    Running task = [P20] [9] [10] for 10 units.
    Running task = [P24] [9] [30] for 10 units.
    Running task = [P0] [9] [25] for 10 units.
    Running task = [P24] [9] [20] for 10 units.
    Running task = [P0] [9] [15] for 10 units.
    Running task = [P24] [9] [10] for 10 units.
    Running task = [P0] [9] [5] for 5 units.
    Running task = [P11] [8] [20] for 10 units.
    Running task = [P16] [8] [25] for 10 units.
    Running task = [P11] [8] [10] for 10 units.
    Running task = [P16] [8] [15] for 15 units.
    Running task = [P2] [7] [40] for 10 units.
    Running task = [P14] [7] [10] for 10 units.
    Running task = [P21] [7] [5] for 5 units.
    Running task = [P2] [7] [30] for 30 units.
    Running task = [P3] [6] [20] for 10 units.
    Running task = [P17] [6] [30] for 10 units.
    Running task = [P22] [6] [35] for 10 units.
    Running task = [P3] [6] [10] for 10 units.
    Running task = [P17] [6] [20] for 10 units.
    Running task = [P22] [6] [25] for 10 units.
    Running task = [P17] [6] [10] for 10 units.
    Running task = [P22] [6] [15] for 15 units.
    Running task = [P13] [5] [15] for 15 units.
    Running task = [P5] [4] [35] for 10 units.
    Running task = [P9] [4] [30] for 10 units.
    Running task = [P10] [4] [35] for 10 units.
    Running task = [P12] [4] [20] for 10 units.
    Running task = [P5] [4] [25] for 10 units.
    Running task = [P9] [4] [20] for 10 units.
    Running task = [P10] [4] [25] for 10 units.
    Running task = [P12] [4] [10] for 10 units.
    Running task = [P5] [4] [15] for 10 units.
    Running task = [P9] [4] [10] for 10 units.
    Running task = [P10] [4] [15] for 10 units.
    Running task = [P5] [4] [5] for 5 units.
    Running task = [P10] [4] [5] for 5 units.
    Running task = [P7] [3] [35] for 10 units.
    Running task = [P8] [3] [30] for 10 units.
    Running task = [P19] [3] [20] for 10 units.
    Running task = [P23] [3] [40] for 10 units.
    Running task = [P7] [3] [25] for 10 units.
    Running task = [P8] [3] [20] for 10 units.
    Running task = [P19] [3] [10] for 10 units.
    Running task = [P23] [3] [30] for 10 units.
    Running task = [P7] [3] [15] for 10 units.
    Running task = [P8] [3] [10] for 10 units.
    Running task = [P23] [3] [20] for 10 units.
    Running task = [P7] [3] [5] for 5 units.
    Running task = [P23] [3] [10] for 10 units.
    Running task = [P18] [2] [40] for 40 units.
    Running task = [P15] [1] [25] for 25 units.

    Average waiting time = 316.20
    Average turnaround time = 343.00
    Average response time = 287.00