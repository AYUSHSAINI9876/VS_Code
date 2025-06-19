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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Not all elements are distinct.\n");
                return 0; // Exit successfully
            }
        }
    }

    printf("All elements are distinct.\n");

    return 0; // Exit successfully
}
