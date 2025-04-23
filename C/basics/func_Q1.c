#include <stdio.h>

float avg(int a, int b, int c);
int main(){
    float x = avg(99,90,85);
    printf("Average =%f", x);
    return 0;
}
float avg(int a, int b, int c){
    float result = (float)(a+b+c)/3;//Type casting
    return result;
}