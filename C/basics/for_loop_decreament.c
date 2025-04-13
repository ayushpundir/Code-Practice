//natural numbers in reverse order
#include <stdio.h>

int main(){
    int n;
    printf("Input n:");
    scanf("%d", &n);
    for(int i=n;i;i--){// Any none zero input is true
        printf("%d\n",i);
    }
    return 0;
}