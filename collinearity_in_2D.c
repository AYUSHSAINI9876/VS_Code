#include <stdio.h>
#include <math.h>

int main()
{

    int x1, x2, x3, y1, y2, y3;
    float a;

    printf("enter x1");
    scanf("%d", &x1);

    printf("enter x2");
    scanf("%d", &x2);

    printf("enter x3");
    scanf("%d", &x3);

    printf("enter y1");
    scanf("%d", &y1);

    printf("enter y2");
    scanf("%d", &y2);

    printf("enter y3");
    scanf("%d", &y3);

    a = 0.5 * (abs(((x1 * (y2 - y3))) + ((x2 * (y3 - y1))) + ((x3 * (y1 - y2)))));

    if (a == 0)
    {
        printf("the points are collinear\n");
    }
    else
        (printf("they are not collinear"));

    return 0;
}