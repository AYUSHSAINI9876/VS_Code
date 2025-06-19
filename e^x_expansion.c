#include <stdio.h>
#include <math.h>

double calculateExponentialSeries(double x, int n)
{
    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++)
    {
        term *= x / i;  // Calculate the next term
        result += term; // Add the next term to the result
    }

    return result;
}

int main()
{
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = calculateExponentialSeries(x, n);

    printf("e^%.2lf using %d terms is approximately: %.6lf\n", x, n, result);

    return 0;
}
