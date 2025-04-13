// #include <stdio.h>

// int main(){
//     int n,i=1;
//     printf("Input:");
//     scanf("%d", &n);
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=n);
//     return 0;
//}
// Another way
#include <stdio.h>

int main(){
    int n,i=0;
    printf("Input:");
    scanf("%d", &n);
    do{
        printf("%d\n",i+1);
        i++;
    }while(i<n);
    return 0;
}