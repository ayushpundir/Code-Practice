#include <stdio.h>
#include <string.h>

struct employee{//declares user defined data type
    int code;
    float salary;
    char name[15];
};
void show(struct employee emp){
    printf("The code of the employee is: %d\n", emp.code);
    printf("The salary of the employee is: .3%f\n", emp.salary);
    printf("The Name of the employee is: %s\n", emp.name);
    emp.code=34;
}
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code=153; // -> is arrow operator 
    //or
    //(*ptr).code = 153;
    ptr->salary=9465.356;
    strcpy(ptr->name, "Ayush");
    show(e1);
    printf("%d",e1.code);//will not change the value

    return 0;
}