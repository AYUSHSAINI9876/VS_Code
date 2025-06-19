#include <stdio.h>

int main()
{
    int n, sum;
    printf("enter the value of n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("please enter a positive integer");
    }

    else
        (sum = n * (n + 1) / 2);

    printf("the sum of first %d natural numbers is:%d\n", n, sum);

    if (n <= 0)
    {

        printf("please enter a positive integer");
    }

    else
        (sum = (n * (n + 1) * ((2 * n) + 1) / 6));

    printf("the sum of squares of first %d natural numbers is:%d\n", n, sum);

    if (n <= 0)
    {

        printf("please enter a positive integer");
    }

    else
        (sum = (n * (n + 1) / 2) * (n * (n + 1) / 2));

    printf("the sum of cubes of first %d natural numbers is:%d\n", n, sum);

    if (n <= 0)
    {

        printf("please enter a positive integer");
    }

    else
        (sum = ((n + 1) * (n + 2) * (n + 3)));

    printf("the sum of the given expression of first %d natural numbers is:%d\n", n, sum);

    return 0;
}
