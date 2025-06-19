#include <stdio.h>

// Function to calculate the nth Fibonacci number iteratively
unsigned long long int iterativeFibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    unsigned long long int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }
    else
    {
        unsigned long long int result = iterativeFibonacci(n);
        printf("Fibonacci(%d) = %llu\n", n, result);
    }

    return 0;
}
