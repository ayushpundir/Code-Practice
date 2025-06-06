// Noob way
// #include <stdio.h>

// int main(){
//     int marks[5];
//     printf("Enter the marks of student 1: ");
//     scanf("%d", &marks[0]);
//     printf("Enter the marks of student 2: ");
//     scanf("%d", &marks[1]);
//     printf("Enter the marks of student 3: ");
//     scanf("%d", &marks[2]);
//     printf("Enter the marks of student 4: ");
//     scanf("%d", &marks[3]);
//     printf("Enter the marks of student 5: ");
//     scanf("%d", &marks[4]);
//     printf("The marks you have entered are %d, %d, %d, %d, %d", marks[0], 
//     marks[1], marks[2], marks[3], marks[4]);
    
//     return 0;
// }
#include <stdio.h>

int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d", &marks[i]);
    }
    for(int i=0;i<5;i++){
        printf("The marks of student %d is %d\n", i+1, marks[i]);
    }
    return 0;
}