#include <stdio.h>

int main() {
    int m, n;
    
    // Input the sizes of arrays A and B
    printf("Enter the size of array A: ");
    scanf("%d", &m);
    printf("Enter the size of array B: ");
    scanf("%d", &n);

    int A[m], B[n];

    // Input elements of array A
    printf("Enter elements of array A (distinct elements):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    // Input elements of array B
    printf("Enter elements of array B (distinct elements):\n");
    for (int i = 0; i < n; i++) { 
        scanf("%d", &B[i]);
    }

    int max_size = (m < n) ? m : n; // Maximum possible size of the intersection array
    int C[max_size]; // Array to store the intersection elements
    int count = 0; // Counter for the number of common elements

    // Find the common elements and store them in array C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i] == B[j]) {
                C[count++] = A[i];
                break; // Break out of inner loop once a common element is found
            }
        }
    }

    // Print the intersection array C
    printf("Intersection of arrays A and B: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");    

    return 0;
}
