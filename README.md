# process_scheduler

Simulates process scheduling mechanism in cpu.
Its a Visual C++ project.

Its in two parts:
 - Process Generation
 - Scheduling

Processes are generated with choice of ration between I/O intensive and cpu intensive processes.
Ones processes are generated one can run the scheduling with one or all of the four algorithms.
Algorithms Implemented:
  1. FCFS
  2. RR
  3. STCF
  4. STCF with Preemption

One can compare the results in terms of
 - cpu utilization
 - throughput
 - avg ready wait time (wait time in ready state)
 - avg turn around time

Graphs are normalized to fit in small place.

One more functionality is to compare the effect of I/O calls in a process against various algorithms.
This will generate processes with varying I/O call levels and simulate against given algorithm and compare various parameters.
