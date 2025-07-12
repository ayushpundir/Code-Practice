#include <stdio.h>

int main(){
    int num1, num2;
    FILE *ptr;
    ptr = fopen("ayush.txt", "r"); 
    if(ptr==NULL){
        printf("This file does not exist");
    }
    else{
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    //fclose(ptr); yaha bhi kar sakte ha
    printf("The value of num1 is: %d\n", num1);
    printf("The value of num2 is: %d\n",  num2);
    }
    fclose(ptr);
    return 0;
}