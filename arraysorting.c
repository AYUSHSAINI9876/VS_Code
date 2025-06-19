#include <stdio.h>

int main()
{
    int n, arr[n], i;

    // Input the number of elements
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Input the elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Check if the elements are sorted in non-decreasing order
    int sorted = 1; // Assume it's sorted initially

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sorted = 0; // Not sorted
            break;
        }
    }

    if (sorted)
    {
        printf("The elements are sorted in non-decreasing order with at most %d comparisons.\n", n - 1);
    }
    else
    {
        printf("The elements are not sorted in non-decreasing order.\n");
    }

    return 0; // Exit successfully
}
