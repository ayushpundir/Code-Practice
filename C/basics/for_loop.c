// first n natural number
#include <stdio.h>

int main(){
    int n;
    printf("Input n:");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("%d\n",i+1);
    }
    return 0;
}