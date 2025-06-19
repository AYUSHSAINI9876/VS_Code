#include <stdio.h>
typedef struct
{
    int x;
    int y;
} vector;
vector add(vector a, vector b)
{
    vector tmp;
    tmp.x = a.x + b.x;
    tmp.y = a.y + b.y;
    return tmp;
}
int main()
{
    vector x = {12, 45}, y = {3, 18};
    vector z;
    z = add(x, y);
    printf(" %d, %d \n", z.x, z.y);
}