#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of processes : ");
	scanf("%d",&n);
	
	float A[n][6];
	float tat=0;
	float wt = 0;
		
	for(i= 0;i<n;i++)
	{
		A[i][0] = i+1;
	}
	for(i = 0;i<n;i++)
	{
		printf("Enter Arrival Time of p %.0f : ",A[i][0]);
		scanf("%f",&A[i][1]);
	}
	for(i = 0;i<n;i++)
	{
		printf("Enter Burst Time of p %.0f : ",A[i][0]);
		scanf("%f",&A[i][2]);
	}
	A[0][3] = 0 + A[0][2];
	A[0][4] = A[0][3] - A[0][1]; 
	A[0][5] = A[0][4] - A[0][2];
	
	tat+= A[0][4];
	wt+=  A[0][5];
	
	for(i=1;i<n;i++)
	{
		if(A[i][1]<=A[i-1][3])
		{
			A[i][3] = A[i-1][3] + A[i][2];
			A[i][4] = A[i][3] - A[i][1]; 
			A[i][5] = A[i][4] - A[i][2];
	
			tat+= A[i][4];
			wt+=  A[i][5];
		}
		else
		{
			A[i][3] = A[i][1] + A[i][2];
			A[i][4] = A[i][3] - A[i][1]; 
			A[i][5] = A[i][4] - A[i][2];
	
			tat+= A[i][4];
			wt+=  A[i][5];
		}
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("%.1f\t",A[i][j]);
		}
		printf("\n");
	}
	printf("Average Turn Around Time : %.2f\n",(tat/(float)n));
	printf("Average wait : %.2f\n",(wt/(float)n));
	return 0;
}
