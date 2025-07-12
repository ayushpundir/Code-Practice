#include <stdio.h>
#include <string.h>

typedef struct employee{//declares user defined data type
    int code;
    float salary;
    char name[15];
}yee;// now either use yee or struct employee
void show(yee emp){
    printf("The code of the employee is: %d\n", emp.code);
    printf("The salary of the employee is: .3%f\n", emp.salary);
    printf("The Name of the employee is: %s\n", emp.name);
}
int main(){
    yee e1;
    yee *ptr;

    ptr = &e1;
    ptr->code=153; // -> is arrow operator 
    //or
    //(*ptr).code = 153;
    ptr->salary=9465.356;
    strcpy(ptr->name, "Ayush");
    show(e1);

    return 0;
}