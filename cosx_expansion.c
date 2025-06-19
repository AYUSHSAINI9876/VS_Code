#include <stdio.h>
#include <math.h>

int main() {
    double x, cosX = 0;        
    int i, n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to compute: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int exponent = 2 * i;
        double term = pow(-1, i) * pow(x, exponent) / 1.0;

        // Calculate factorial   
        int factorial = 1;
        for (int j = 1; j <= exponent; j++) {
            factorial *= j;  
        }

        term /= factorial;

        cosX += term;
    }

    printf("cos(%lf) = %lf\n", x, cosX);

    return 0;
}
