#include <stdio.h>

void slice(char *st, int m, int n){
    int i=0;
    while((i+m)<n){
        st[i]=st[i+m];
        i++;
    }
    st[i]='\0';
}

int main(){
    char str[]="Ayush";
    slice(str, 0, 3);
    printf("%s",str);
    return 0;
}