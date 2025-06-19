#include <stdio.h>
#include <math.h>

int main()
{
    double n, r, i;

    printf("enter the common ratio:");
    scanf("%lf", &r);

    printf("enter the no of terms:");
    scanf("%lf", &n);

    for (i = 2; i <= 2 * pow(r, n - 1); i *= r)
    {
        printf("%lf\n", &i);
    }

    return 0;
}