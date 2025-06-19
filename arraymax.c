#include <stdio.h>

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for n.\n");
        return 1; // Exit with an error code
    }

    int arr[n];
    int i;

    // Input the elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest element
    int largest = arr[0]; // Initialize largest with the first element

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Print the largest element
    printf("The largest element among the input integers is: %d\n", largest);

    return 0; // Exit successfully
}
