// #include <stdio.h>

// int main(){
//     int n,prime=1;
//     printf("Input n:");
//     scanf("%d", &n);
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             prime = 0;
//             break;
//     }
//     }
//     if(prime==0){
//         printf("It's not prime");
//     }
//     else{
//         printf("It's prime");
//     }
//     return 0;
// }
#include <stdio.h>

int main(){
    int n,i=2,prime=1;
    printf("Input n:");
    scanf("%d", &n);
    
    while(i<n){
        //i++;
        if(n%i==0){
            prime = 0;
            break;
        }
        i++;
    }
    if(prime==0){
        printf("It's not prime");
    }
    else{
        printf("It's prime");
    }
    return 0;
}