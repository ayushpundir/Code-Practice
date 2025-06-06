#include <stdio.h>

int main(){
    int n;
    printf("Enter the number for which you want to genrate it's table:");
    scanf("%d", &n);
    int arr[10];
    for(int i=1;i<=10;i++){
        arr[i-1]=n*i;
        printf("%dX%d=%d\n",n,i,arr[i-1]);
    }
    return 0;
}