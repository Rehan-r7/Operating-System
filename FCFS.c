#include <stdio.h>
int main()
{
    int A[] = {34, 28, 111, 123, 148, 199};
    int c = 200;  // Total cylinders
    int cur = 53; // current head
    int res = 0;  // variable to store result

    res = cur - A[0]; // current track - first track in the list
   
    printf("%d ", res);
    
    for (int i = 0; i < 5; i++)
    {
        if (A[i] > c) // break if given track is out of cylinders
            break;

        if (A[i] <= A[i + 1]) 
        { res += A[i + 1] - A[i]; }

        else
        { res += A[i] - A[i + 1]; }

        printf(" %d ", res);
    }
    printf("\nThe Final Time Taken : %d", res);
}