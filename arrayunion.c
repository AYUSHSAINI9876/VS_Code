#include <stdio.h>

int main()
{
    int m, n;

    // Input the size of arrays A and B
    printf("Enter the size of array A: ");
    scanf("%d", &m);

    printf("Enter the size of array B: ");
    scanf("%d", &n);

    // Declare arrays A, B, and C
    int A[m], B[n], C[m + n];

    // Input elements of array A
    printf("Enter elements of array A (distinct integers):\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }

    // Input elements of array B
    printf("Enter elements of array B (distinct integers):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    // Initialize variables to keep track of the current position in arrays A and B
    int i = 0, j = 0, k = 0;

    // Find the union of arrays A and B
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else if (A[i] > B[j])
        {
            C[k++] = B[j++];
        }
        else
        {
            // If A[i] and B[j] are equal, include one of them in the union
            C[k++] = A[i++];         
            j++;
        }
    }

    // If there are remaining elements in array A, copy them to C
    while (i < m)
    {
        C[k++] = A[i++];   
    }

    // If there are remaining elements in array B, copy them to C     
    while (j < n)
    {
        C[k++] = B[j++];
    }

    // Print the union array C
    printf("Union of arrays A and B is:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
