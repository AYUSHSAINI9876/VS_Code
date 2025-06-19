#include <stdio.h>
int main()
{
    int i, n, A[20], k, maxbegin, maxcount, ssbegin, count;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("A = ");
    for (i = 0; i < n; i++)
        printf("%d, ", A[i]);
    printf("\n");
    maxbegin = 0;
    maxcount = 1;
    ssbegin = 0;
    count = 1;
    k = 1;
    while (k < n)
    {
        if (A[k] == A[k - 1])
        {
            count++;
            if (count > maxcount)
            {
                maxbegin = ssbegin;
                maxcount = count;
            }
        }
        else
        {
            ssbegin = k;
            count = 1;
        }
        k++;
    }
    return 0;
}