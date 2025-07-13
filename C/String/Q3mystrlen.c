#include <stdio.h>
int mystrlen(char *str){
    char *ptr=str;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main(){
    char *str="Ayush";
    int a=mystrlen(str);
    printf("length of string is %d", a);
    return 0;
}