#include <stdio.h>

int main()
{

    float length_m, weight_kg, time_sec, centimeters, grams, hours;

    printf("enter the length(in meters)");
    scanf("%f", &length_m);

    printf("enter the weight(in kg)");
    scanf("%f", &weight_kg);

    printf("enter the time(in sec)");
    scanf("%f", &time_sec);

    centimeters = (length_m)*100;
    grams = (weight_kg * 1000);
    hours = (time_sec / 3600);

    printf("the length in cm is:%f\n", centimeters);
    printf("the weight in grams is:%f\n", grams);
    printf("the time in hours is:%f\n", hours);

    return 0;
}