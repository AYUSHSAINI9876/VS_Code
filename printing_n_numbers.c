#include <stdio.h>

int main()
{
    int n;
    printf("enter the number n:");
    scanf("%d\n", &n);

    int i = 1;

    while (i <= n)
    {
        printf("%d\n", &i);
        i++;
    }
    return 0;
}
