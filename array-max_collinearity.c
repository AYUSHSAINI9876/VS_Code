#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of points (n ≥ 2): ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Invalid input. n should be at least 2.\n");
        return 1;
    }

    int x[n], y[n];       // Arrays to store x and y coordinates
    int maxCollinear = 2; // Initialize with at least 2 points for any valid input

    // Input the coordinates of the points
    printf("Enter the coordinates of %d points (x y):\n", n);
    for (int i = 0; i < n; i++)     
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    // Check for collinearity using nested loops
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)          
        {
            int collinearCount = 2; // Initialize with 2 points (i and j)

            // Check all other points for collinearity with i and j
            for (int k = 0; k < n; k++)
            {
                if (k != i && k != j)  
                {
                    if ((x[i] * (y[j] - y[k]) + x[j] * (y[k] - y[i]) + x[k] * (y[i] - y[j])) == 0)
                    {
                        collinearCount++;
                    }
                }
            }

            // Update the maximum collinear count
            if (collinearCount > maxCollinear)
            {
                maxCollinear = collinearCount;
            }
        }
    }

    printf("Maximum number of collinear points: %d\n", maxCollinear);

    return 0;
}
