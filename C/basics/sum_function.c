#include <stdio.h>

/*sum is a function which takes a and b as input and returns integer
  as an output*/

int sum(int a, int b); // Function prototye declaration

int main(){                                      //IMP main ke apne 
    int c;                                       // variables ha
    c= sum(5,6); // Function call
    // 5 and 6 are arguments
    printf("The value of c is %d", c);
    return 0;
}
int sum(int a, int b){ // function definition   // function(sum) ke apne
    int result;                                 // variables ha
    result=a+b; //a and b are parameters
    return result;
}
// agar function(sum) aur main ma same variables le toh usse kuch 
// farak nhi padega