#include<stdio.h>
int main()
{
    float celsius_temperature;
    float fahrenheit_temperature;

    printf("Enter your temperature(C): ");
    scanf("%f",&celsius_temperature);
    printf("\n");

    fahrenheit_temperature = (celsius_temperature*9/5) + 32;

    printf("Given Temperature in Fahrenheit Scale: %.2f(F)",fahrenheit_temperature);


    printf("\n");
    return 0;
}
