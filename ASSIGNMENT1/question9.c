#include <stdio.h>
int main(void){
    float temperature_celsius, temperature_fahrenheit;
    printf("Enter the temperature in Celsius:");
    scanf("%f", &temperature_celsius);
    temperature_fahrenheit = (temperature_celsius * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %.2f", temperature_fahrenheit);
    return 0;
}
