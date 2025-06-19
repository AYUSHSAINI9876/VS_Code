#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter the value of a");
    scanf("%d", &a);

    printf("enter the value of b");
    scanf("%d", &b);

    printf("enter the value of c");
    scanf("%d", &c);

    printf("not a and not b and c=%d\n", (!a) && (!b) && c);
    printf("(a and b) or c=%d\n", (a && b) || c);
    printf("a and (b or c)=%d\n", (a && (b || c)));
    printf("a and (b or c=0)=%d\n", a && ((b || c) == 0));
    printf("not(a and ((b or c)==0))=%d\n", !(a && (b || c)));
    printf("a and (b or c)=%d\n", a && (b || c == 0));
    printf("(a and ( b or c))==1)=%d\n", (a && (b || c)) == 1);
    printf("not a and (not b or c)=%d\n", (!a) && ((!b) || c));

    return 0;
}
