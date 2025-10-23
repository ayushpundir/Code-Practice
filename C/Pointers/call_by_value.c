//sending the values of arguments
#include <stdio.h>

int sum(int a, int b);
int main(){
    int a=4,b=7;//the value a and b will be copied to a and b of func
    printf("The value of a and b is %d and %d\n",a,b);
    printf("sum of a and b is %d\n", sum(a,b));
    printf("The value of a and b after calling func is %d and %d\n",a,b);
    return 0;
}
int sum(int a, int b){         //main func ke a and b ki value iss func
    int c = a+b;             // mai copy hogi,,,func ke a aur b ki value
    a=3489;              //jo bhi ho uss se main ko ghanta farak nhi padta  
    b=2434;
    return c;
}