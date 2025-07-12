#include <stdio.h>

int main(){
    int num1=79;
    FILE *vptr;
    vptr = fopen("generated.txt", "w");
    //fclose(ptr); yaha bhi kar sakte ha
    fprintf(vptr,"The value of num1 is: %d\n", num1);
    fclose(vptr);
    return 0;
}