#include <stdio.h>
#include <math.h>

int main()
{

    float price, amount, baseprice, GSTrate, GSTprice, totalprice;

    printf("enter the price(in Rs./kg) of natural wood");
    scanf("%f", &price);

    printf("enter the amount(in kg) of natural wood");
    scanf("%f", &amount);

    printf("enter the gst rate  of natural wood");
    scanf("%f", &GSTrate);

    baseprice = amount * price;
    printf("base price:%0.2f\n", baseprice);

    GSTprice = baseprice * GSTrate;
    printf("GST price:%0.2f\n", GSTprice);

    totalprice = (baseprice) + (GSTprice);
    printf("total price:%0.2f\n", totalprice);

    return 0;
}
