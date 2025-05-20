#include <stdio.h>

int main(){
    int num;
    printf("enter num\n");
    scanf("%d", &num);

    if(num==1){
        printf("The number is one");
    }
    else if(num==2){
        printf("The number is two");
    }
    else if(num==3){
        printf("The number is Three");
    }
    else{
        printf("not one, two or three");
    }
    return 0;
}