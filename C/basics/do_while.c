#include <stdio.h>

int main(){
    int i = 0;
    do{                       // Agar condition false bhi ho tab bhi 
        printf("i=%d\n", i);  // atleast ek bar ye run karaga
        ++i;
     } while(i<10);
    return 0;
}