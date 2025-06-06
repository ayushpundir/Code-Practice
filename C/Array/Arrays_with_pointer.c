#include <stdio.h>

int main(){
    int marks[4];
    int *ptr;
    ptr=&marks[0]; // or ptr=marks;
    for(int i=0;i<4;i++){
        printf("Enter the marks of student %d:", i+1);
        scanf("%d", ptr);//ptr is address where marks are stored
        ptr++;
    }
    for(int j=0;j<4;j++)
    printf("The marks of student %d is %d\n",j+1, marks[j]);
    return 0;
}