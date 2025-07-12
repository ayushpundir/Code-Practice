#include <stdio.h>

int main(){
    //fgetc demo for reading a file
    // FILE *ptr;
    // ptr=fopen("getcdemo.txt", "r");
    // //char c=fgets(ptr);
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // fclose(ptr);
    FILE *ptr;
    ptr=fopen("putcdemo.txt", "w");
    putc('A', ptr);
    putc('y', ptr);
    putc('u', ptr);
    putc('s', ptr);
    putc('h', ptr);
    fclose(ptr);
    return 0;
}