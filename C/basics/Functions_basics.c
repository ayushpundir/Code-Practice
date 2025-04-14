#include <stdio.h>

void display(); // Function prototye // void doesn't return anything
int main(){
    printf("Initializing display function\n");
    display();  // Function call
    printf("Display function finished its work\n");
    return 0;
}
void display(){  // Function definition
    printf("This is display\n");
}