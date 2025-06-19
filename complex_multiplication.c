#include <stdio.h>
struct complex
{
    float real;
    float imag;
};
int main()
{
    struct complex num1, num2, result;

    // Input the first complex number
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &num1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &num1.imag);

    // Input the second complex number
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &num2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &num2.imag);

    // Add the two complex numbers
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;

    // Display the result
    printf("Sum of the two complex numbers: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
