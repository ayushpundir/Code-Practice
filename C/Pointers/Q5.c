#include <stdio.h>

int main(){
    int i = 8;
    int *j = &i;
    int **k = &j;
    printf("The value of i %d", **k);
    return 0;
}