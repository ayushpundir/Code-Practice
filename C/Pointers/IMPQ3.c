// #include <stdio.h>
// void change(int *a);
// int main(){
//     int x = 7;
//     printf("The value before change %d\n", x);
//     change(&x);
//     printf("The value after change %d\n", x);
//     return 0;
// }
// void change(int *a){
//     //printf("Ten times the value of given input is %d\n", *a*10);
//     *a = 10*(*a);
// }
//using call by value
#include <stdio.h>
int change(int a);
int main(){
    int x = 7;
    printf("The value before change %d\n", x);
    change(x);
    printf("The value after change %d\n", x);
    return 0;
}
int change(int a){
    //printf("Ten times the value of given input is %d\n", (a * 10));
    int i = 10*a;
    return i;
}