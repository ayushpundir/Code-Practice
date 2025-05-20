#include <stdio.h>

int main(){
    int n1,n2,n3,n4;
    printf("Enter any four numbers\n");
    printf("1.");
    scanf("%d", &n1);

    printf("2.");
    scanf("%d", &n2);

    printf("3.");
    scanf("%d", &n3);

    printf("4.");
    scanf("%d", &n4);

    if(n1>=n2 && n1>=n3 && n1>=n4){
        printf("%d is greatest", n1);
    }
    else if(n2>=n1 && n2>=n3 && n2>=n4){
        printf("%d is greatest", n2);
    }
    else if(n3>=n2 && n3>=n1 && n3>=n4){
        printf("%d is greatest", n3);
    }
    else{
        printf("%d is greatest", n4);
    }
    return 0;
}