 #include <stdio.h>
#include <math.h>

int main()
{
    int r0, r1, r2, a, b, c, d, x0, x1, x2, x3;
    char x;

    printf("enter r0:");
    scanf("%d", &r0);

    printf("enter r1:");
    scanf("%d", &r1);

    printf("enter r2:");
    scanf("%d", &r2);

    printf("polynomial in root representation is:f(x)=(x-%d)*(x-%d)*(x-%d)\n", r0, r1, r2);

    a = (r0 + r1 + r2);
    b = (r0 * r1) + (r1 * r2) + (r2 * r0);
    c = (r0 * r1 * r2);

    printf("polynomial in coefficient representation is:f(x)=(x^3- %dx^2+ %dx- %d)\n", a, b, c);
    printf("please enter 4 evaluation points\n");

    printf("enter x0:");
    scanf("%d", &x0);
    printf("enter x1:");
    scanf("%d", &x1);
    printf("enter x2:");
    scanf("%d", &x2);
    printf("enter x3:");
    scanf("%d", &x3);

    a = pow(x0, 3) - (r0 + r1 + r2) * pow(x0, 2) + (r0 * r1 + r1 * r2 + r2 * r0) * x0 - r0 * r1 * r2;
    b = pow(x1, 3) - (r0 + r1 + r2) * pow(x1, 2) + (r0 * r1 + r1 * r2 + r2 * r0) * x1 - r0 * r1 * r2;
    c = pow(x2, 3) - (r0 + r1 + r2) * pow(x2, 2) + (r0 * r1 + r1 * r2 + r2 * r0) * x2 - r0 * r1 * r2;
    d = pow(x3, 3) - (r0 + r1 + r2) * pow(x3, 2) + (r0 * r1 + r1 * r2 + r2 * r0) * x3 - r0 * r1 * r2;

    printf("polynomial in point value representation:f(x)={(%d,%d),(%d,%d),(%d,%d),(%d,%d)}", x0, a, x1, b, x2, c, x3, d);
    return 0;
}
