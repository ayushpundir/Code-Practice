#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter Temperature in celsius\n");//n escape sequence character
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit is %f", fahrenheit);
    return 0;
}