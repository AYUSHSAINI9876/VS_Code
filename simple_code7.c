#include <stdio.h>

int main()
{

    int a, b, c, d;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    printf("enter c");
    scanf("%d", &c);

    printf("enter d");
    scanf("%d", &d);

    if (a > b && c > d)
    {
        printf("enter the correct input!\n");
    }

    printf(" first interval:[%d,%d]\n", a, b);
    printf(" second interval:[%d,%d]\n", c, d);
    printf("interval arithmetic:\n");
    printf("addition:[%d,%d]+[%d,%d]=[%d,%d]\n", a, b, c, d, a + c, b + d);
    printf("addition:[%d,%d]-[%d,%d]=[%d,%d]\n", a, b, c, d, a - d, b - c);

    if (c == 0 || d == 0)
    {
        printf("ERROR:division by zero is impossible\n");
    }

    return 0;
}
