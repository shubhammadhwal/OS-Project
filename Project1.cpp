#include<stdio.h>
void arrange()
{
	int i,j,n;
	printf("Enter Number Of Processess : ");
	scanf("%d",&n);
	int process[n],burst[n];
	for(i=0;i<n;i++)
	{
		process[i]=i+1;
	}

	for(i=0;i<n;i++)
	{
		printf("\n%d",process[i]);
	}
	printf("\nEnter Corresponding Busrt Time : ");
		for(j=0;j<n;j++)
	{
		scanf("%d",&burst[j]);
	}
	
}
float avgwt()
{}
float burstt()
{}
void background()
{}

void about()
{}


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
				arrange();
				burstt();
				avgwt();
				break;
			}
		case 2:
			{
				background();
				break;
			}
		case 3:
			{
				about();
				break;
			}
		default:
			{
				printf("Wrong Input, Try Again.");
				goto ErrorIS;
			}
	}
}
