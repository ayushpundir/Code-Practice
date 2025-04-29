#include <stdio.h>

int main(){
    // 97-122 ASCII code
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122){
        printf("Lowercase\n");
    }
    else{
        printf("Uppercase\n");
    }
    return 0;
}