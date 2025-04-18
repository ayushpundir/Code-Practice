#include <stdio.h>

int main(){
    int n;
    long long int factorial = 1;
    printf("Input n:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    printf("The factorial of given number is %d", factorial);
    return 0;
}
// Using while loop
// #include <stdio.h>

// int main(){
//     int n,factorial = 1,i=1;
//     printf("Input n:");
//     scanf("%d", &n);

//     while(i<=n){
//         factorial *= i;
//         i++;
//     }
//     printf("The factorial of given number is %d", factorial);
//     return 0;
// }
