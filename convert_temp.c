#include<stdio.h>

int main(){

    float temperature_f, temperature_c;

    printf("Enter temperature in F: ");
    scanf("%f", &temperature_f);

    // 180 units of Fahrenheit is 100 units in Centigrade and is offset by 32. 
    temperature_c = 5 * (temperature_f  - 32) / 9;

    printf("The temperature is %f°C\n", temperature_c);

    return 0;
}