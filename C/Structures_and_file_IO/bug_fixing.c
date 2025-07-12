#include <stdio.h>

int main(){
    FILE *ptrr;
    FILE *ptrw;
    int c;
    ptrr=fopen("bug.txt", "r");
    fscanf(ptrr, "%d", &c);
    ptrw=fopen("bug.txt", "w");
    fprintf(ptrw, "%d", c*2);
    fclose(ptrr);
    fclose(ptrw);
    return 0;
}