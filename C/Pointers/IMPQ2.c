// write a variable having a operator i,print the address of i,pass
// this variable to a function and print its address. Are these address
// same? why? 
#include <stdio.h>

void address( int a){
    printf("The address of variable is %u\n", &a);
    // yaha per i ki copy pass hogi
    // yaha jo i ha vo alag i ha
}
int main(){
    int i =4;// ye main ka 4 ha
    printf("The address of i is %u\n", &i);
    address(i);//yaha per i ki copy aayagi
    return 0;
}