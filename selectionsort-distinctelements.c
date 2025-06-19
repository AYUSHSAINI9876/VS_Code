#include <stdio.h>

int main()
{
    int n;

    // Input the number of elements in array A
    printf("Enter the number of positive integers: ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int A[n], B[n];
    int sizeB = 0; // Variable to keep track of the number of elements in B

    // Input the elements of array A
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Selection sort to create array B with distinct elements in increasing order
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[minIndex])
            {
                minIndex = j;
            }
        }

        // Check if the element is distinct before adding to B
        int isDistinct = 1;
        for (int k = 0; k < sizeB; k++)
        {
            if (B[k] == A[minIndex])
            {         
                isDistinct = 0;
                break;
            }
        }

        if (isDistinct)
        {
            B[sizeB] = A[minIndex];
            sizeB++;
        }
    }

    // Output array B
    printf("Array B with distinct elements in increasing order: ");
    for (int i = 0; i < sizeB; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
