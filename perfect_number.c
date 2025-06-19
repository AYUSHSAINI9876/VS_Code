#include <stdio.h>

int main()
{

    int n, i, sum;
    printf("enter n");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
    {
        printf("%d is a perfect number\n", n);
    }
    else
        (printf("%d is not a perfect number\n", n));
    return 0;
}
