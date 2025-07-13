#include <stdio.h>
#include <stdio.h>

int main(){
    char *st="Hell";
    char st2[34]="Hello";
    int val=strcmp(st, st2);//compares two strings is the difference of 
    //ascii code is positive then returns positive value if the
    //difference is negative then returns negative value if same then 0 
    printf("The val is %d", val);
    return 0;
}