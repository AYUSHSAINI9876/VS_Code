#include <stdio.h>

int is_prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
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

    printf("Prime numbers up to %d are: ", n);
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
