#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a number: "); 
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("%d cannot be written as the sum of two prime numbers.\n", n);
    }
    else
    {
        int found = 0;
        for (int i = 2; i <= n / 2; ++i) 
        {
            if (isPrime(i) && isPrime(n - i))
            {
                printf("%d = %d + %d\n", n, i, n - i);
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("%d cannot be written as the sum of two prime numbers.\n", n);
        }
    }

    return 0;
}
