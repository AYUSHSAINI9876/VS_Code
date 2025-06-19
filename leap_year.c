#include <stdio.h>

int main()
{
    int year;
    
    printf("enter the year:");
    scanf("%d",&year);
    
    if ((year %4 == 0 && year %100 != 0) || ( year %400 == 0)){
        
        printf("this is a leap year\n");
        
    }
    
    else (
        
         printf("this is not a leap year\n")
         
         );
        
        return 0;
}


