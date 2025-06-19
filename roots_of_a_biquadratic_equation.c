#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, q, r, s, i;

    printf("enter a,b,c:");
    scanf("%f%f%f", &a, &b, &c);

    p = -(b / (2 * a));
    q = fabs((sqrt((b * b) - (4 * a * c))) / 2 * a);
    r = fabs(sqrt(0.5 * ((sqrt((p * p) + (q * q))) + p)));
    s = fabs(sqrt(0.5 * ((sqrt((p * p) + (q * q))) - p)));

    printf("the Roots:%0.3f+i(%0.3f),", r, s);
    printf("%0.3f-i(%0.3f),", r, s);
    printf("-%0.3f+i(%0.3f),", r, s);
    printf("-%0.3f-i(%0.3f).", r, s);

    return 0;
}
