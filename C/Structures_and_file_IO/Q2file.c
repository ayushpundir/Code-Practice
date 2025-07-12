#include <stdio.h>

int main(){
    FILE *ptr;
    int n;
    printf("Enter the integer for which you want to print table");
    scanf("%d", &n);
    ptr=fopen("table.txt", "w");
    for(int i=0;i<10;i++){
        fprintf(ptr, "%dX%d=%d\n",n,i+1,(i+1)*n);
    }
    fclose(ptr);
    return 0;
}