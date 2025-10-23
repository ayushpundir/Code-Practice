// Pointer is a variable which stores the address of another variable
#include <stdio.h>

int main(){
    int i=34;
    int*j=&i;// declare a variable j of type int-pointer
    int **k=&j;//stores address of j
    int ***l=&k;//stores address of k
    printf("The value of i = %d\n", i);
    printf("The value of i = %d\n", *j);
    printf("The address of i = %u\n", &i);//%u is format specifier for
    printf("The address of i = %u\n", j);//printing pointer address
    printf("The address of j = %u\n", &j);
    printf("The value of j = %d\n", *(&j));
    return 0;
}