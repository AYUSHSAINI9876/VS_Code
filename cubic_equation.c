#include <stdio.h>
#include <math.h>

double cubic_function(double a, double b, double c, double x)
{
    return x * x * x + a * x * x + b * x + c;  
}

double find_approximate_root(double a, double b, double c)
{
    double x1 = -fabs(a) - fabs(b) - fabs(c);
    double x2 = fabs(a) + fabs(b) + fabs(c);

    while (1)
    {
        double f_x1 = cubic_function(a, b, c, x1);
        double f_x2 = cubic_function(a, b, c, x2);
        double x = x1 - f_x1 * (x2 - x1) / (f_x2 - f_x1);

        if (fabs(cubic_function(a, b, c, x)) < 0.0001)  
        {
            return x;   
        }

        if (cubic_function(a, b, c, x) <= 0)
        {
            x1 = x;
            if (cubic_function(a, b, c, x + x1 / 2) >= 0)
            {
                x2 = x + x1 / 2;
            }
        }
        else
        {
            x2 = x;
            if (cubic_function(a, b, c, x + x2 / 2) <= 0)
            {
                x1 = x + x2 / 2;
            }
        }
    }
}

int main()
{
    double a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double root = find_approximate_root(a, b, c);

    printf("Approximate root: %lf\n", root);
    return 0;
}
