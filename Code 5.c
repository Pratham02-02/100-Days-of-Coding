//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>

int main()
{
    float c;
    printf("Input temprature in celcius");
    scanf("%f", &c);
    printf("celcius=%f\nFahrenheit=%f ", c, (c* 9/5) + 32);
    return 0;
}