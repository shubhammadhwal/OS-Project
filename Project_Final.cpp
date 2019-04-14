#include<stdio.h>
void execution()
{
 int count,n,time,remain,flag=0,time_quantum=10; 
  int wait_time=0,turnaround_time=0,arrivaltime[100],bursttime[100],rt[100]; 
  printf("\nEnter Total Process: "); 
  scanf("%d",&n); 
  remain=n; 
  for(count=0;count<n;count++) 
  { 
    tryag:
    printf("\nEnter Arrival Time for Process %d (i.e. it should be greater than 3): ",count+1);
	scanf("%d",&arrivaltime[count]); 
	if(arrivaltime[count]>3)
	{
	printf("\nEnter Burst Time for Process %d :",count+1);
    scanf("%d",&bursttime[count]);
    rt[count]=bursttime[count]; 
	}
	else
	{
		printf("\nArrival Time Constraint, i.e. Enter Arrival time more than 3\nTry Again.\n");
		goto tryag;
	}}

  printf("\nTime Quantum is:\t%d",time_quantum); 
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
     if(rt[count]==0 && flag==1) 
    { 
      remain--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-arrivaltime[count],time-arrivaltime[count]-bursttime[count]); 
      wait_time+=time-arrivaltime[count]-bursttime[count]; 
      turnaround_time+=time-arrivaltime[count]; 
      flag=0; 
    } 
    if(count==n-1) 
      count=0; 
    else if(arrivaltime[count+1]<=time) 
      count++; 
    else 
      count=0; 
  } 
  printf("\nAverage Waiting Time= %f\n",wait_time*1.0/n); 
  printf("Avg Turnaround Time = %f",turnaround_time*1.0/n); 
  


}
void background()
{	printf("\n\nRefrence: Abraham Silberschatz, Greg Gagne, and Peter Baer Galvin, Operating System Concepts, Eighth Edition , Chapter 5, Process Scheduling.\n");
	printf("This program uses the following Scheduling algorithm:\n-> Round Robin");
	printf("\n\n1.) Round Robin Scheduling:\nRound robin scheduling is similar to FCFS scheduling, except that CPU bursts are assigned with limits called time quantum.\nWhen a process is given the CPU, a timer is set for whatever value has been set for a time quantum.\nIf the process finishes its burst before the time quantum timer expires, then it is swapped out of the CPU just like the normal FCFS algorithm.\nIf the timer goes off first, then the process is swapped out of the CPU and moved to the back end of the ready queue.\nThe ready queue is maintained as a circular queue, so when all processes have had a turn, then the scheduler gives the first process another turn, and so on.");
}

void about_me()
{
printf("\n\nMy Name is Shubham Madhwal.\nI am pursuing B.Tech in Computer Science And Engineering.\nI am from Section K17KV");

}


main()
{
	int ch;
	printf("\n\tWelcome to my Operating System Project based on Scheduling Algorithms\n");
	printf("\n\nQuestion :  Design a scheduling program capable of scheduling many processes that\narrive at some time interval and are allocated the CPU not more than 10  CPU is idle\nfor 3 time units and does not entertain any process prior this time.\nScheduler must maintain a queue that keeps the order of execution of all the processes.\nCompute average waiting and turnaround time.");
	printf("\n\nSelect from the options given below: ");
	printf("\n1. Execution of the program.");
	printf("\n2. Background regarding the program");
	printf("\n3. About me");
	ErrorIS:
	printf("\n\nEnter your Choice: ");
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
  
 
