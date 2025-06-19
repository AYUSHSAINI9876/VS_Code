#include <stdio.h>
#include <math.h>

int main()
{

    float h1, h2, h3, COR;

    printf("enter the value of h1:");
    scanf("%f", &h1);

    printf("enter the value of h2:");
    scanf("%f", &h2);

    if (h1 > 0)
    {

        COR = sqrt(h2 / h1);
        printf("COR VALUE IS: %0.2f\n", COR);
    }

    else
        (

            printf("h1 should be greater than zero to avoid error"));

    h3 = h2 + (COR * (h2 - h1));

    printf("the value of h3 after the second collision is :%0.2f\n", h3);

    return 0;
}
