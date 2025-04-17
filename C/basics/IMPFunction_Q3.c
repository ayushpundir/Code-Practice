//%.3f IMPORTANT
#include <stdio.h>

float force(int mass);
int main(){
     float x= force(54);//Enter mass in kg
    printf("Force of attraction on a body of mass m =%.3f kg-m/s^2", x);
    return 0;
}
float force(int mass){
    float result = (mass*9.8);
    return result;
}