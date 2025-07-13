#include <stdio.h>

int occ(char *a, char c){
    int i=0;
while(*a!='\0'){
    if(*a==c){
        i++;
    }
    a++;
}
return i;
}

int main(){
    char st[]="ilovecoding";
    int val =occ(st, 'o');
    printf("occurence = %d", val);
    return 0;
}