#include <stdio.h>

int main()
{

    int n, i;

    printf("enter the value of n:");
    scanf("%d", &n);

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("factorial of n is :%d", fact);

    return 0;
}
