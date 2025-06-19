#include <stdio.h>
int main()
{
    int n, A[100], i;
    printf("how many numbers you want?");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &A[i]);      // input the i-th array element
    for (i = n - 1; i >= 0; --i) // note: loop counts downward
        printf("%d", A[i]);       // output the i-th array element
    return 0;
}