#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{

    double x1, x2, x3, y1, y2, y3, z1, z2, z3;
    char temp, r1, r2, r3;
    float A;

    printf("A(x1,y1,z1) : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);
    printf("B(x2,y2,z2) : ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);
    printf("C(x3,y3,z3) : ");
    scanf("%lf %lf %lf", &x3, &y3, &z3);
    // print the given three points
    printf("A(x1,y1,z1) : (%.2lf,%.2lf,%.2lf)\n", x1, y1, z1);
    printf("B(x2,y2,z2) : (%.2lf,%.2lf,%.2lf)\n", x2, y2, z2);
    printf("C(x3,y3,z3) : (%.2lf,%.2lf,%.2lf)\n", x3, y3, z3);

    A = 0.5 * fabs((sqrt((pow(((y2 - y1) * (z2 - z3)) - ((z2 - z1) * (y2 - y3)), 2)) +
                         (pow(((x2 - y1) * (z2 - z3)) - ((z2 - z1) * (x2 - x3)), 2)) +
                         (pow(((x2 - y1) * (y2 - y3)) - ((y2 - y1) * (x2 - x3)), 2)))));

    if (A == 0)
    {
        printf("the given triangle is collinear\n");
    }
    else
        (printf("the triangle is non-collinear and area of the triangle formed by these points is %f\n", A));

    // print the points in collating sequence
    if ((x1 > x2) || ((x1 == x2) && ((y1 > y2) || ((y1 == y2) && (z1 > z2)))))
    {
        temp = x1;
        x1 = x2;
        x2 = temp;
        temp = y1;
        y1 = y2;
        y2 = temp;
        temp = z1;
        z1 = z2;
        z2 = temp;
        temp = r1;
        r1 = r2;
        r2 = temp;
    }
    if ((x2 > x3) || ((x2 == x3) && ((y2 > y3) || ((y2 == y3) && (z2 > z3)))))
    {
        temp = x2;
        x2 = x3;
        x3 = temp;
        temp = y2;
        y2 = y3;
        y3 = temp;
        temp = z2;
        z2 = z3;
        z3 = temp;
        temp = r2;
        r2 = r3;
        r3 = temp;
    }
    if ((x1 > x2) || ((x1 == x2) && ((y1 > y2) || ((y1 == y2) && (z1 > z2)))))
    {
        temp = x1;
        x1 = x2;
        x2 = temp;
        temp = y1;
        y1 = y2;
        y2 = temp;
        temp = z1;
        z1 = z2;
        z2 = temp;
        temp = r1;
        r1 = r2;
        r2 = temp;
    }
    printf("The collating sequence of the points is : %c(%lf,%lf,%lf) < %c(%lf,%lf,%lf) < %c(%lf,%lf,%lf)", r1, x1, y1, z1, r2, x2, y2, z2, r3, x3, y3, z3);
    return 0;
}