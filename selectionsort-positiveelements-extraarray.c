#include <stdio.h>

int main()
{
    int n;

    // Input the number of elements
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n];
    int i, j;

    // Input the elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("sorted array B in non-decreasing order:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");

    return 0; // Exit successfully
}
