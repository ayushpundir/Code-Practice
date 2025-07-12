#include <stdio.h>

struct employee{//declares user defined data type
    int code;
    float salary;
    char name[15];
};

int main(){
    struct employee facebook[100];

    facebook[0].code=425;
    facebook[0].salary=342;
    strcpy(facebook[0].name, "Ayush");

     facebook[1].code=525;
    facebook[1].salary=385;
    strcpy(facebook[1].name, "harry");

     facebook[2].code=656;
    facebook[2].salary=334;
    strcpy(facebook[2].name, "Raj");

    return 0;
}