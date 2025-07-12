#include <stdio.h>

int main(){
    FILE *ptr;
    char name1[14],name2[15];
    int num1, num2;
    printf("Enter your name: ");
    scanf("%s", name1);
    printf("Enter your salary: ");
    scanf("%d", &num1);
    printf("Enter your name: ");
    scanf("%s", name2);
    printf("Enter your salary: ");
    scanf("%d", &num2);
    ptr=fopen("data.txt", "w");
    fprintf(ptr, "%s, %d\n",name1, num1);
    fprintf(ptr, "%s, %d",name2, num2);
    return 0;
}