#include <stdio.h>

int factorial(int x);

int main(){
    int a = 52;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}
int factorial(int x){
    //printf("Calling factorial (%d)\n", x);
    if(x==1 || x==0){
        return 1;// base condition
    }
    else{
        return x*factorial(x-1);
    }
}
// When a function calls itself its called recursion
