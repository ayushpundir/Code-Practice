#include<stdio.h>
#include<string.h>

int main(){
    char st1[34];
    char st2[35];
    char c;
    int i=0;
    printf("Enter string 1: ");
    scanf("%s", st1);

    printf("Enter second string character by character \n");

    while(c!='\n'){
        fflush(stdin);// coz we have used 2 scanf continuously
        scanf("%c", &c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("String 1 :%s\n", st1);
    printf("String 2 :%s\n", st2);
    printf("strcmp for these strings returns %d", strcmp(st1, st2));

    return 0;
    }

    