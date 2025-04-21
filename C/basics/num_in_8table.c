#include <stdio.h>

int main(){
    int sum=0;// agar sirf sum type kare toh galat ans aa raha ha 
    for(int i=0;i<=10;i++){ // aur sum=0 per shi ans aa raha ha
        sum += (i*8);
    }
    printf("Sum of numbers in table of 8 %d", sum);
    return 0;
}