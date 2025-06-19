#include <stdio.h>

int main()
{
    int n;

    // Step 1: Read the value of 'n'
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int A[n];

    // Step 2: Read 'n' integers and store them in the 'A' array
    printf("Enter %d integers:\n", n);                   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Step 3: Implement Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min_index])
            {
                min_index = j;  
            }
        }

        // Swap the minimum element with the current element
        int temp = A[i];
        A[i] = A[min_index];
        A[min_index] = temp;
    }

    // Print the sorted array
    printf("Sorted array in non-decreasing order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
