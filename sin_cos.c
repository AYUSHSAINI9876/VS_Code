#include <stdio.h>

#define DIFF 0.00001

double factorial(int n)
{
    double result = 1.0;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

double sin(double x)    
{
    double result = 0.0;
    double term = x;
    int n = 1;

    while (1)
    {
        result += term;
        term = -term * x * x / ((2 * n + 1) * (2 * n));
        n++;

        if (term < DIFF && term > -DIFF)
        {
            break;
        }
    }

    return result;
}

double cos(double x)
{
    double result = 1.0;
    double term = 1.0;
    int n = 1;

    while (1)
    {
        term = -term * x * x / ((2 * n) * (2 * n - 1));
        result += term;
        n++;

        if (term < DIFF && term > -DIFF)
        {
            break;
        }
    }

    return result;
}

int main()
{
    double x;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    double sin_x = sin(x);
    double cos_x = cos(x);

    printf("sin(x) = %.6lf\n", sin_x);
    printf("cos(x) = %.6lf\n", cos_x);

    return 0;
}
