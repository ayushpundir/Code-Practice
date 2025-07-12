#include <stdio.h>

struct employee{//declares user defined data type
    int code;
    float salary;
    char name[15];
};

int main(){
    struct employee ayush={123,5234.234,"Ayush"};
    printf("Code of the employee: %d\n", ayush.code);
    printf("Salary of the employee: %.3f\n", ayush.salary);
    printf("Name of the employee: %s\n", ayush.name);
    return 0;
}