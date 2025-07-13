#include <stdio.h>

void presence(char *a, char c){

while(*a!='\0'){
    if(*a==c){
       printf("Yes");
       break;
    }
    a++;
}
}

int main(){
    char st[]="ilovecoding";
    presence(st, 'g');
    return 0;
}