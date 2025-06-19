#include <stdio.h>

int main()
{
    int n;

    // Input the number of elements
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n];
    int i;

    // Input the elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find the largest element
    int max = arr[0]; // Initialize largest with the first element
    int min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Print the max element
    printf("The max element among the input integers is: %d\n", max);

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Print the min element
    printf("The min element among the input integers is: %d\n", min);

    return 0; // Exit successfully
}
