#include <stdio.h>

int main()
{

    float h, r, surface_area;

    printf("enter h");
    scanf("%f", &h);

    printf("enter r");
    scanf("%f", &r);

    surface_area = 2 * 3.14 * r * (h + r);

    printf("the height of cylinder is:%fcm\n", h);

    printf("the radius of cylinder is:%fcm\n", r);

    printf("the area of cylinder is:%fcm^2\n", surface_area);

    return 0;
}
