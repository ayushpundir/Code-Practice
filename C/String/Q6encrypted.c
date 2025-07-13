#include <stdio.h>

void encrypt(char *ptr){

    while(*ptr!='\0'){
        *ptr = *ptr+1;
        ptr++;
    }
}

int main(){
    char c[]="Locker code is Rajputana";
    encrypt(c);
    printf("The encrypted string is %s", c);
    return 0;
}