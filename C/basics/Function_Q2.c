#include <stdio.h>

float temp(float celsius);
int main(){
     float x= temp(97.0);
    printf("temp in fahrenheit =%f", x);
    return 0;
}
float temp(float celsius){
    float result = ((celsius*9/5)+32);
    return result;
}