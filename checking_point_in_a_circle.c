#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, a, b, r;
    float z;
    printf("enter x-coordinate of the point :");
    scanf("%d", &x);

    printf("enter y-coordinate of the point :");
    scanf("%d", &y);

    printf("enter x-coordinate of the centre :");
    scanf("%d", &a);

    printf("enter y-coordinate of the centre :");
    scanf("%d", &b);

    printf("enter radius of the circle :");
    scanf("%d", &r);

    z = pow((x - a), 2) + pow((y - b), 2) - pow(r, 2);

    if (z < 0)
    {
        printf("point is inside the circle\n");
    }

    else if (z > 0)
    {
        printf("point is outside the circle\n");
    }
    else
        (printf("point lies on the boundary of the circle\n"));

    return 0;
}
