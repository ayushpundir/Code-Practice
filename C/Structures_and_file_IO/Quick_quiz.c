#include <stdio.h>
#include <string.h>

struct employee{//declares user defined data type
    int code;
    float salary;
    char name[];
};

int main(){
    struct employee e1, e2, e3;//creating a structure variable
    printf("Enter your name: ");
    gets(e1.name);
   //printf("%s", e1.name);
    printf("Enter your code: ");
    scanf("%d", &e1.code);
    printf("Enter your salary: ");
    scanf("%f", &e1.salary);
fflush(stdin);
    printf("Your information is saved\n");
//fflush(stdin);
    printf("Enter your name: ");
    gets(e2.name);
    printf("Enter your code: ");
    scanf("%d", &e2.code);
    printf("Enter your salary: ");
    scanf("%f", &e2.salary);
fflush(stdin);
    printf("Your information is saved\n");
//fflush(stdin);
    printf("Enter your name: ");
    gets(e3.name);
    printf("Enter your code: ");
    scanf("%d", &e3.code);
    printf("Enter your salary: ");
    scanf("%f", &e3.salary);
    printf("Your information is saved");

    return 0;
}