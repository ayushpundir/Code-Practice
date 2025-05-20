#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age >= 90)
    {
        printf("Your age is or above 90 you cannot drive\n");
    }
    else
    {
        printf("You can drive\n");
    }
    if (age = 50)
    {   // here we have used assinment operator not ==, age=50 i.e.
        // not zero so it will return true, even if age is not 50 it will print
        // half century
        printf("Half Century\n");
    }

    //     if(a%2==0){
    //     printf("%d is even\n", a);
    // }
    //  else{
    //     printf("%d is odd\n", a);
    // }
    return 0;
}