#include<stdio.h>
#include<string.h>

struct process
{
	int at,tt,bt,wt;
	char name[10];
}p[10],temp;

struct gantt
{
	int st,ct;
	char name[10];
}g[10];

void main()
{
	int i,j,pt=0,gt=0,te=0,n;
	float wait=0,turn=0;
	printf("Enter the no.of process:- \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the details of the process:-\n");
		printf("Enter the name:-\n");
		scanf("%s",p[i].name);
		printf("Enter the arrival time:-\n");
		scanf("%d",&p[i].at);
		printf("Enter the burst time:-\n");
		scanf("%d",&p[i].bt);
	}
	printf("The details of process before sorting\n");
	printf("------------------------------------------------------\n");
	printf("Process\t\tArival time\t\tBurst Time\t\t\n");
	printf("------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%d\t\t%d\t\t\n",p[i].name,p[i].at,p[i].bt);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(p[j].at>p[j+1].at)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
			
	printf("The details of process after sorting\n");
	printf("----------------------------------------------------------------\n");
	printf("Process\t\tArrival Time\t\tBurst Time\t\t\n");
	printf("----------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%d\t\t%d\t\t\n",p[i].name,p[i].at,p[i].bt);
	}
	while(pt<n)
	{
		if(te>=p[pt].at)
		{
			strcpy(g[gt].name,p[pt].name);
			g[gt].st = te;
			te += p[pt].bt;
			g[gt].ct = te;
			p[pt].wt = g[gt].st - p[pt].at;
			p[pt].tt = g[gt].ct - p[pt].at;
			gt++;
			pt++;
		}
		else
		{
			strcpy(g[gt].name,"IDLE");
			g[gt].st=te;
			g[gt].ct=p[pt].at;
			te=g[gt].ct;
			gt++;
		}
	}
	printf("The details of the processes after gantt are \n");
	printf("-----------------------------------------------------------------------------------------------------\n");
	printf("Name\tArrival Time\tBurst Time\t\tWT\t\tTT\t\t\n");
	printf("-----------------------------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\n",p[i].name,p[i].at,p[i].bt,p[i].wt,p[i].tt);
		wait=wait+p[i].wt;
		turn=turn+p[i].tt;
	}
	printf("Gantt Chart\n");
	printf("-----------------------------------------------------\n");
	printf("|");
	for(i=0;i<gt;i++)
	{
		printf("%s\t|",g[i].name);
	}
	printf("\n---------------------------------------------------\n");
	printf("%d\t",g[gt].st);
	for(i=0;i<gt;i++)
	{
		printf("%d\t",g[i].ct);
	}
	printf("\n");
	printf("Average waiting time = %f\n",wait/n);
	printf("Average turnaround time = %f\n",turn/n);
}