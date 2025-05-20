#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    // oneliner if statement
    (num <= 5) ? printf("The number is less than or equal to five") : printf("the number is greater than five");
    return 0;
}