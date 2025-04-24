#include <stdio.h>

void morning();   
void afternoon();
void night();
int main(){
    morning();
    afternoon();
    night();
    return 0;
}
void morning(){
    printf("Good Morning\n");
}
void afternoon(){
    printf("Good Afternoon\n");
}
void night(){
    printf("Good Night\n");
}