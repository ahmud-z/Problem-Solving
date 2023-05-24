#include<stdio.h>
int main()
{
    float fahrenheit_temperature;
    float celsius_temperature;


    printf("Enter your temperature(F): ");
    scanf("%f",&fahrenheit_temperature);
    printf("\n");

    celsius_temperature = (fahrenheit_temperature-32)*5/9;

    printf("Given Temperature in Celsius Scale: %.2f(C)",celsius_temperature);


    printf("\n");
    return 0;
}

