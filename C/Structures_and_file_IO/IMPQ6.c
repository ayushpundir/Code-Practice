#include <stdio.h>

typedef struct complex{
    float real;
    int imag;
}lex;
void display(lex a){
        printf("The complex number is %.1f+%di\n",a.real, a.imag);
}
int main(){
    lex c[3];
    for(int i=0;i<3;i++){
    printf("Enter complex number %d\n",i+1);

    printf("Enter the real value of complex: ");
    scanf("%f", &c[i].real);
    fflush(stdin);
    printf("Enter the imaginary value of complex: ");
    scanf("%d", &c[i].imag);
    }
    for(int i=0;i<3;i++){
        display(c[i]);
    }
    return 0;
}