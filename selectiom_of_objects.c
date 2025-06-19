#include <stdio.h>
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    int n, r, num;

    printf("enter the value of n:");
    scanf("%d", &n);

    printf("enter the value of r:");
    scanf("%d", &r);

    if (n < 0 || r < 0 || n < r)
    {

        printf("no such selction exists.");
    }

    int nCr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("%dC%d = %d\n", n, r, nCr);

    return 0;
}
