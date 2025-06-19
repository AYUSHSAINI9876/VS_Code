#include <stdio.h>

int main()
{
    int number[25], sum;

    for (int i = 1; i <= 25; i++)
    {
        printf("enter the %d element of array", i);
        scanf("%d", &number[i]);
    }

    for (int i = 1; i <= 25; i++)
    {
        printf("the value of %d element of the array is %d\n", i, number[i]);
    }
    sum += number[25];
    printf("the sum of elements of array is %d\n", sum);
    return 0;
}
