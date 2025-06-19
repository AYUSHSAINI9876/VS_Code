#include <stdio.h>
void jumble(char A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        A[i] = A[size - i - 1];
}
int main()
{
    char A[] = "REMARKABLE";
    jumble(A, 10);
    printf("%s", A);
    return 0;
}