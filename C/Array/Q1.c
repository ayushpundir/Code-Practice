#include <stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=&arr[0]; //or int *ptr=arr;
    printf("ptr points to %d\n", *ptr);
    ptr = ptr+2;
    printf("new ptr(ptr+2) points to %d\n", *ptr);
    return 0;
}