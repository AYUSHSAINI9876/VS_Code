#include <stdio.h>

int main()
{

    int a, b, c, d, e, f, g, h;
    char x;
    float i = a / e, j = e / a;

    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    printf("enter c");
    scanf("%d", &c);

    printf("enter d");
    scanf("%d", &d);

    printf("enter e");
    scanf("%d", &e);

    printf("enter f");
    scanf("%d", &f);

    printf("enter g");
    scanf("%d", &g);

    printf("enter h");
    scanf("%d", &h);

    printf("h(x):%dx^3+%dx^2+%dx+%d\n", a, b, c, d);
    printf("l(x):%dx^3+%dx^2+%dx+%d\n", e, f, g, h);

    if (a % e == 0 && b % f == 0 && c % g == 0 && d % h == 0)
    {
        printf("h(x) and l(x) are equivalent with a common factor of %f\n", i);
    }
    if (e % a == 0 && f % b == 0 && g % c == 0 && h % d == 0)
    {
        printf("h(x) and l(x) are equivalent with a common factor of %f\n", j);
    }

    else
        (printf("h(x) and l(x) are not equivalent\n"));

    return 0;
}
