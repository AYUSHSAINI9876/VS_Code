#include <stdio.h>

int main()
{

    int a, b,c;
    printf("enter a");
    scanf("%d",&a);

    printf("enter b");
    scanf("%d",&b);

    printf("enter c");
    scanf("%d",&c);

    if(a==(b+c)){
        printf("%d=%d+%d",a,b,c);
        
    }

    else if(b==(a+c)){
        printf("%d=%d+%d",b,a,c);

    }
    else if(c==(a+b)){
        printf("%d=%d+%d",c,a,b);

    }

    else(printf("no number can be expressed as a sum of other two numbers\n"));

    return 0;
}