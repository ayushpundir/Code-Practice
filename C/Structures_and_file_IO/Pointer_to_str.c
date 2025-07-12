#include <stdio.h>

struct employee{//declares user defined data type
    int code;
    float salary;
    char name[15];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code=153; // -> is arrow operator 
    //or
    //(*ptr).code = 153;
    printf("%d",e1.code);
    return 0;
}