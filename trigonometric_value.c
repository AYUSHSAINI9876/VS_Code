#include <stdio.h>
#include <math.h>

int main()
{

    int x, i;

    printf("enter the value of x");
    scanf("%d", &x);

    for (i = 1; i < x; i++)
    {
        printf("%0.3lf ", atan(i + 1) - atan(i));
    }

    return 0;
}
