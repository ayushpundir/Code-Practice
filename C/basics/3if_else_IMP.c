#include <stdio.h>

int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);

    // if(a%2==0){
    //     printf("The number is even\n");
    // }
    // else{
    //     printf("The number is odd\n");
    // }
        if(a%2==0){
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd\n", a);
    }
    return 0;
}