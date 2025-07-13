#include <stdio.h>

void decrypt(char *ptr){

    while(*ptr!='\0'){
        *ptr = *ptr-1;
        ptr++;
    }
}

int main(){
    char c[]="Mpdlfs!dpef!jt!Sbkqvubob";
    decrypt(c);
    printf("The decrypted string is %s", c);
    return 0;
}