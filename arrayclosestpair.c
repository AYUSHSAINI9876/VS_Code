#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of points (n >= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Invalid input. n must be at least 2.\n");
        return 1;
    }

    // Initialize arrays to store x and y coordinates
    int x[n], y[n];

    // Input coordinates
    printf("Enter the coordinates of %d points:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Point %d (x y): ", i + 1);
        scanf("%d %d", &x[i], &y[i]);
    }

    int minDistance = -1; // Initialize with a negative value    
    int closestPairX, closestPairY;

    // Compare distances between all pairs of points
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int distance = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);

            if (minDistance == -1 || distance < minDistance) {    
                minDistance = distance;
                closestPairX = x[i];
                closestPairY = y[i];
            }
        }
    }

    printf("Closest pair of points: (%d, %d) and (%d, %d)\n", closestPairX, closestPairY, x[n-1], y[n-1]);

    return 0;
}
