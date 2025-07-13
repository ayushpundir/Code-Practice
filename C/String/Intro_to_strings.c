#include <stdio.h>

int main(){
    //char str[]={'A', 'y', 'u', 's', 'h', '\0'};
    char str[]="Ayush";
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}