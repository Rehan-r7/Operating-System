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
	/* Alternate method
	int A1[4][2];
    int A2[4][3];
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&A1[i][j]);
        }
    }
    printf("Arrival BurstTime\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<1;j++)
        {
            A2[i][j] = A1[i][j]+A1[i][j+1];
            A2[i][j+1] = A2[i][j] - A1[i][j];
            A2[i][j+2] = A2[i][j+1] - A1[i][j+1];
            
            printf("%d    ",&A2[i][j]);
        }
        printf("\n");
    }
    */
	
	
	return 0;
}
