#include <stdio.h>

void morning();   
void afternoon();
void night();
int main(){
    morning(); //main ne morning ko directly call kiya aur
    return 0;  // afternoon aur night ko indirectly
}
void morning(){
    printf("Good Morning\n");
    afternoon();
}
void afternoon(){
    printf("Good Afternoon\n");
    night();
}
void night(){
    printf("Good Night\n");
}