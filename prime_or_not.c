#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, prime = 1;

    printf("enter the value of n:");
    scanf("%d", &n);

    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n", n);
    }
    else
        (printf("%d is a prime number\n", n));
    return 0;
}
