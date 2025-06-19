#include <stdio.h>

int main() {
    int n, k;
    
    // Input the number of elements and the target sum
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the target sum (k): ");
    scanf("%d", &k);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter %d integer elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Check if there exist two distinct elements whose sum equals k
    int found = 0;  // Flag to track if such elements are found
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                found = 1;
                printf("Yes, there are two elements (%d and %d) at indices %d and %d whose sum is %d.\n",
                       arr[i], arr[j], i, j, k);
                break;  // No need to continue searching
            }
        }
        if (found) {
            break;  // No need to continue searching
        }
    }
    
    if (!found) {
        printf("No such elements found in the array whose sum is %d.\n", k);
    }
    
    return 0;
}
