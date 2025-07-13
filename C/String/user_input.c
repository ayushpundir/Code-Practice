#include <stdio.h>

int main(){
    char st[34];
    printf("Enter your name: ");
    scanf("%s", st); //Here in input we can't use space
    //or// scanf("%s", &st[0]);
    printf("Your name is: %s",st);
    return 0;
}