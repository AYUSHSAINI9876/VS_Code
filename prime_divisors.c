#include <stdio.h>
#include <math.h>

int main()
{

     int n, i, j, x, count = 0;

     printf("enter the value of n");
     scanf("%d", &n);
     printf("prime divisors of n is/are:");

     for (i = 2; i <= sqrt(n); i++)
     {

          if (n % i == 0)
          {
               x = n / i;
               count = 0;
               for (j = 2; j <= sqrt(x); j++)
               {
                    if (x % j == 0)
                         count += 1;
               }
               if (count == 0)
                    printf("%d,", x);

               count = 0;
               for (j = 2; j <= sqrt(i); j++)
               {
                    if (i % j == 0)
                         count += 1;
               }
               if (count == 0)
                    printf("%d,", i);
          }
     }

     return 0;
}
