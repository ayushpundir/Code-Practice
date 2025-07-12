#include <stdio.h>
#include <string.h>

struct employee{//declares user defined data type
    int code;
    float salary;
    char name[15];
};

int main(){
    struct employee e1;//creating a structure variable
    e1.code=134;// "." is member operator 
    e1.salary=10000.342;
    strcpy(e1.name, "Ayush Pundir");

    printf("Employee code %d\n",e1.code);
    printf("Name %s\n",e1.name);
    printf("Salary %.3f$\n",e1.salary);

    return 0;
}