#include <stdio.h>

int main(){
    // char st[35]="Ayush";
    // st="Pundir"; aisa karne se iski value change nhi hogi
    // but
    char *st="Ayush";
    st = "pundir";//will work
    printf("%s",st);
    return 0;
}