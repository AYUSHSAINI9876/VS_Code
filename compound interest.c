#include <stdio.h>
#include <math.h>

int main()
{
   
   float compound_interest, amount, principal_amount, rate, time;
   
   printf("enter the principal_amount:");
   scanf("%f",&principal_amount);
   
   printf("enter the rate:");
   scanf("%f",&rate);
   
   printf("enter the time:");
   scanf("%f",&time);
   
   amount=(principal_amount)*pow((1+(rate/100)),time);
   
   compound_interest=amount-principal_amount;
   
   printf("the amount is:%0.3f\n",amount);
   
   printf("the compound_interest is:%0.3f\n",compound_interest);
   
   return 0;
}

