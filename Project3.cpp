  #include<stdio.h>
void execution()
{
 int count,j,n,time,remain,flag=0,time_quantum=10; 
  int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10]; 
  printf("Enter Total Process:\t "); 
  scanf("%d",&n); 
  remain=n; 
  for(count=0;count<n;count++) 
  { 
    printf("Enter Arrival Time for Process (i.e. it should be greater than 3) %d :",count+1);
	scanf("%d",&at[count]); 
    printf("\nEnter Burst Time for Process %d :",count+1);
    scanf("%d",&bt[count]);
    rt[count]=bt[count]; 
  } 
  printf("Enter Time Quantum:\t%d",time_quantum); 
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); 
  for(time=0,count=0;remain!=0;) 
  { 
    if(rt[count]<=time_quantum && rt[count]>0) 
    { 
      time+=rt[count]; 
      rt[count]=0; 
      flag=1; 
    } 
    else if(rt[count]>0) 
    { 
      rt[count]-=time_quantum; 
      time+=time_quantum; 
    } 
}
void background()
{	printf("\n\nRefrence: Abraham Silberschatz, Greg Gagne, and Peter Baer Galvin, Operating System Concepts, Eighth Edition , Chapter 5, Process Scheduling.\n");
	printf("This program uses two Scheduling algorithms that are:\n1.)Round Robin\n2)Shortest Job First");
	printf("\n\n1.) Round Robin Scheduling:\nRound robin scheduling is similar to FCFS scheduling, except that CPU bursts are assigned with limits called time quantum.\nWhen a process is given the CPU, a timer is set for whatever value has been set for a time quantum.\nIf the process finishes its burst before the time quantum timer expires, then it is swapped out of the CPU just like the normal FCFS algorithm.\nIf the timer goes off first, then the process is swapped out of the CPU and moved to the back end of the ready queue.\nThe ready queue is maintained as a circular queue, so when all processes have had a turn, then the scheduler gives the first process another turn, and so on.");
	printf("\n\n2.) Shortest Job First:\nThe idea behind the SJF algorithm is to pick the quickest fastest little job that needs to be done, get it out of the way first, and then pick the next smallest fastest job to do next.\nSJF can be proven to be the fastest scheduling algorithm, but it suffers from one important problem: How do you know how long the next CPU burst is going to be?\nFor long-term batch jobs this can be done based upon the limits that users set for their jobs when they submit them, which encourages them to set low limits, but risks their having to re-submit the job if they set the limit too low.\n");
	printf("However that does not work for short-term CPU scheduling on an interactive system. Another option would be to statistically measure the run time characteristics of jobs, particularly if the same tasks are run repeatedly and predictably.\nBut once again that really isn't a viable option for short term CPU scheduling in the real world.");
}

void about_me()
{
printf("\n\nMy Name is Shubham Madhwal.\nI am pursuing B.Tech in Computer Science And Engineering.\nI am from Section K17KV");

}


main()
{
	int ch;
	printf("Welcome to my Operating System Project based on Scheduling Algorithms\n");
	printf("\n\nQuestion :  Design a scheduling program capable of scheduling many processes that\narrive at some time interval and are allocated the CPU not more than 10  CPU is idle\nfor 3 time units and does not entertain any process prior this time.\nScheduler must maintain a queue that keeps the order of execution of all the processes.\nCompute average waiting and turnaround time.");
	printf("\n\nSelect from the options given below");
	printf("\n1. Execution of the program.");
	printf("\n2. Backgroug regarding the program");
	printf("\n3. About me");
	ErrorIS:
	printf("\nEnter your Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				execution();
				break;
			}
		case 2:
			{
				background();
				break;
			}
		case 3:
			{
				about_me();
				break;
			}
		default:
			{
				printf("Wrong Input, Try Again.");
				goto ErrorIS;
			}
	}
}
  
 
