#include <stdio.h>

int main()
{
    int n;
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; // Exit with an error code
    }

    int fib[n + 1];
    fib[0] = 0;
    if (n >= 1)
    {
        fib[1] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Fibonacci sequence up to %d elements:\n", n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0; // Exit successfully
}
