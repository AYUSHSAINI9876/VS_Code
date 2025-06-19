#include <stdio.h>

int main()
{
    int n, d, i;

    printf("enter n: ");
    scanf("%d", &n);

    printf("enter d: ");
    scanf("%d", &d);

    for (i = 1; i <= 1 + (n - 1) * d; i += d)
    {
        printf("%d ", i);
    }
    return 0;
}
