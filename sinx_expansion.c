#include <stdio.h>
#include <math.h>

int main() {
    double x, sinX = 0;   
    int i, n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to compute: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int exponent = 2 * i + 1;
        double term = pow(-1, i) * pow(x, exponent) / 1.0;

        // Calculate factorial
        int factorial = 1;
        for (int j = 1; j <= exponent; j++) {
            factorial *= j;
        }

        term /= factorial;

        sinX += term;
    }

    printf("sin(%lf) = %lf\n", x, sinX);

    return 0;
}
