#include<stdio.h>

int main(){
    int length, breadth;

    printf("Enter the length of rectangle\n");
    scanf("%d", &length);

    printf("enter the breadth of rectangle\n");
    scanf("%d", &breadth);

    printf("the area of rectangle is %d", length * breadth);
    return 0;
}