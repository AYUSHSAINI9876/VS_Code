#include <stdio.h>

int main()
{

    int n, reversedNum = 0;

    printf("enter the value of n:");
    scanf("%d", &n);

    while (n > 0)
    {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
