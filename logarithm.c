#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    {
        double x, logX = 0;

        printf("Enter the value of x : ");
        scanf("%lf", &x);

        printf("Enter the number of terms to compute: ");
        scanf("%d", &n);

        if (fabs(x) >= 1.0)
        {
            printf("The series may not converge for |x| >= 1\n");
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    logX -= pow(x, i) / i;
                }
                else
                {
                    logX += pow(x, i) / i;
                }
            }
        }

        printf("log(1+%lf) = %lf\n", x, logX);
    }

    return 0;
}
