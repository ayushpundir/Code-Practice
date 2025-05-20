#include <stdio.h>

int main(){
    int age,vip;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("if you have vipcard enter 1 else 2\n");
    scanf("%d", &vip);
    
    if ((age>=18 && age<=70) || (vip==1)){
        printf("you can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }
    return 0;
}