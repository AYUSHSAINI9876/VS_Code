#include <stdio.h>

int main()
{

  unsigned int n, bit_length;

  bit_length = 0;

  printf("enter the value of n:");

  scanf("%d", &n);

  while (n > 0)
  {

    n = n >> 1;
    bit_length++;
  }
  printf("the bit length value is: %d\n", bit_length);

  return 0;
}
