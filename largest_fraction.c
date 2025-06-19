#include <stdio.h>

int main()
{

        float a, b, c, d, e, f;

        printf("enter the value of a");
        scanf("%f", &a);

        printf("enter the value of b");
        scanf("%f", &b);

        printf("enter the value of c");
        scanf("%f", &c);

        printf("enter the value of d");
        scanf("%f", &d);

        printf("enter the value of e");
        scanf("%f", &e);

        printf("enter the value of f");
        scanf("%f", &f);

        float s = a / d, w = b / f, t = c / f;
        float max;
        if (s > w)
        {
                max = s;
                if (s > t)
                {
                        max = s;
                }
                else
                {
                        max = t;
                }
        }

        else
        {
                max = w;
                if (w > t)
                {
                        max = w;
                }
                else
                {
                        max = t;
                }
        }

        float h;
        h = (a / max);
        printf("%0.2f", h);
        return 0;
}
