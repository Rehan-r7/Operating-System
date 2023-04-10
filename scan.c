#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void sort(int A[], int n) // Insertion sort
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}
void display(int A[], int n) // for printing array
{
    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int scan(int A[], int c, int cur, int res, int size, int dir)
{ // cylinders, current, result, size, direction
    int temp;
    int i;
    for (temp = 0; temp < size; temp++) // gives the index of current head
    {
        if (A[temp] == cur)
        {
            break;
        }
    }
    if (dir == 0) // right
    {
        for (i = temp; i < size - 1; i++) // right sub-array
        {
            res += A[i + 1] - A[i]; // higher value - lower value

            printf("%d - %d", A[i + 1], A[i]); // printing difference
            printf(" (%d) ", res);             // result after each difference
        }
        res += (c - 1) - A[i];        // eg.:- (c-1) 200-1 = 199 i.e last cylinder
                                      // last cylinder - last right element in the array
        res += (c - 1) - A[temp - 1]; // last cylinder - element before current

        for (i = temp - 1; i > 0; i--) // left sub-array
        {
            res += A[i] - A[i - 1];            // higher value - lower value
            printf("%d - %d", A[i], A[i - 1]); // printing difference
            printf(" (%d) ", res);
        }
    }
    else if (dir == 1) // left
    {
        for (i = temp; i > 0; i--) // left sub-array
        {
            res += A[i] - A[i - 1];
            printf("%d - %d", A[i], A[i - 1]);
            printf(" (%d) ", res);
        }

        res += A[temp + 1] - A[i];            // element after current - first element in the list
        for (i = temp + 1; i < size - 1; i++) // right sub-array
        {
            res += A[i + 1] - A[i];
            printf("%d - %d", A[i + 1], A[i]);
            printf(" (%d) ", res);
        }
        res += (c - 1) - A[i]; // last cylinder - last right element in the list
    }
    return res;
}

int main()
{
    int A[MAX];
    int size, dir;
    int head, cylinders;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter direction 0 or 1 (Right = 0 and Left = 1) : ");
    scanf("%d", &dir);

    if (dir == 0 || dir == 1)
    {
        sort(A, size); // calling sort function

        display(A, size); // calling display fuction
        printf("\n");

        printf("Enter current head : ");
        scanf("%d", &head);

        printf("Enter total cylinders : ");
        scanf("%d", &cylinders);
        // res = 0 (initial value)
        int ans = scan(A, cylinders, head, 0, size, dir); // storing result
        printf("\nTotal Seek Time Taken : %d", ans);
    }
    else
    {
        printf("Please Enter valid directon!!!");
    }
}
