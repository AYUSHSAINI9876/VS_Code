#include <stdio.h>

int main()
{

   int x, a, b;

   printf("enter the fraction");
   scanf("%d/%d", &a, &b);
   printf("%d,%d", a, b);
   printf("continued fraction");

   printf("[");

   while (1)
   {

      if (a == 1)
      {
         printf("%d, ", b);
         break;
      }

      printf("%d, ", a / b);
      a = a % b;
      if (a != 0)
      {
         x = a;
         a = b;
         b = x;
      }
      else
         break;
   }
   printf("]\n");

   return 0;
}
