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
    int largest = arr[0]; // Initialize largest with the first element
    int second_largest = arr[1];

    if (second_largest > largest)
    {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    // Iterate through the array to find the largest and second largest values
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    printf("a pair of elements that add up to the largest value over all pairs is [%d,%d]", largest, second_largest);

    return 0;
}