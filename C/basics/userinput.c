#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the value of a\n");
    scanf("%d", &a); // %a means address of a
    printf("enter the value of b\n");
    scanf("%d", &b);

    printf("the sum of a and b is %d", a+b);
    return 0;
}