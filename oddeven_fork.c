#include<stdio.h>
#include<unistd.h>
void main()
{
	int a,i,j;
	a=fork();
	if(a==0)
	{
		for(i=1;i<=10;i++)
		{
			if(i%2!=0)
			{
				printf("%d\n",i);
			}
		}
		
	}
	else if(a>0)
	{
		wait(NULL);
		for(i=1;i<=10;i++)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
			}
			
		}
		
	}
}
