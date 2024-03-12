#include<stdio.h>
#include<unistd.h>
void main()
{
	int c=getpid();
	int a;
	a=fork();
	if(a==0)
	{
		int b=getpid();
		printf("%d is the pid of child \n",b);
		printf("%d is the pid of parent\n",c);
	}
	
}
