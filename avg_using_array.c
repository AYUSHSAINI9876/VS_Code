#include <stdio.h>

int main()
{
    const int MAX_SIZE = 100;
    int i, size;
    float marks[MAX_SIZE];
    float total;
    scanf("%d", &size);
    for (i = 0, total = 0; i < size; i++)
    {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    printf("Total = %f \n Avg = %f\n",
           total, total / size);
    return 0;
}