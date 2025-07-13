#include <stdio.h>

int main(){
    char st[34];
    //char *st; declaring string using pointer
    printf("Enter your name: ");
    gets(st);//used to store multiple strings including space
    puts(st);
    //printf("Your name is: %s",st);
    return 0;
}