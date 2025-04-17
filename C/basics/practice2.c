#include <stdio.h>

int main(){
    int m1,m2,m3;
    float percentage;
    printf("Enter the marks of your top 3 subjects\n");
    printf("1.");
    scanf("%d", &m1);

    printf("2.");
    scanf("%d", &m2);

    printf("3.");
    scanf("%d", &m3);

    percentage = (m1+m2+m3)/3;

    if(percentage >=40 && m1>=33 && m2>=33 && m3 >=33){
        printf("Your percentage is %f and you are PASS\n", percentage);
    }
    else{
        printf("Your percentage is %f and you are FAIL\n", percentage);
    }

    return 0;
}