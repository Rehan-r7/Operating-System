#include <stdio.h>
#define MAX 20
int fcfs(int A[],int c,int cur,int res,int size)
{
    res = cur - A[0]; // current track - first track in the list
   
    printf("%d ", res);
    
    for (int i = 0; i < size-1; i++)
    {
        if (A[i] > c) // break if given track is out of cylinders
            break;

        if (A[i] <= A[i + 1]) 
        { res += A[i + 1] - A[i]; }

        else
        { res += A[i] - A[i + 1]; }

        printf(" %d ", res);
    }
    return res;
}
int main()
{
    int A[MAX];
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&A[i]);
    }
    
    int ans = fcfs(A,200,53,0,size);// cylinder = 200,current = 53,result =0 
   printf("\nThe Final Time Taken : %d", ans); 

}
