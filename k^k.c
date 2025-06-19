#include <stdio.h>

long long power(int base, int exponent)
{
    long long result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main() 
{
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    long long sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum += power(k, k);
    }

    printf("Sum of the series k^k from 1 to %d is %lld\n", n, sum);

    return 0;
}
