#include<stdio.h>

int main(){
    
    double x;

    printf("enter the value of x");
    scanf("%lf",&x);

    printf("1+x(1+x(1+x(1+x(1+x(1+x)))))=%.4lf\n",1+(x*(1+(x*(1+(x*(1+(x*(1+(x*(1+x)))))))))));

    printf("1-x(1-x(1-x(1-x(1-x(1-x)))))=%.4lf\n",1-(x*(1-(x*(1-(x*(1-(x*(1-(x*(1-x)))))))))));

    return 0;
}