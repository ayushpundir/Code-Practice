#include <stdio.h>
#include <string.h>

int main(){
    char *st="This";
    char st2[34];
    strcpy(st2, st);//copy the second string passed to it into the first string
    // similarly there is strcat which concatinate strings
    // char st2[34]="hello";
    // char *st="Ayush";
    // strcat(st2, st);

    printf("now st2 is %s", st2);
    return 0;
}