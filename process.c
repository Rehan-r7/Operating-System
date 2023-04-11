#include<stdio.h>
#define MAX 4
int main()
{
	int p,i;
	int arrive[MAX],burst[MAX],com[MAX],wait[MAX],tat[MAX];
	printf("Enter number of processes : ");
	for(i=0;i<p;i++)
	{
		scanf("%d",&arrive[i]);
	}
	for(i=0;i<p;i++)
	{
		scanf("%d",&burst[i]);
	}
	for(i=0;i<p;i++)
	{
		scanf("%d",&comp[i]);
	}
	for(i=0;i<p;i++)
	{
		com[i] += arrive[i]+burst[i];
		
		
	}
	
	
	return 0;
}
