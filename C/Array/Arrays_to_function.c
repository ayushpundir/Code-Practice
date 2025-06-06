#include <stdio.h>

// void printarray(int *ptr, int n ){
//     for(int i=0;i<n;i++){
//         printf("The value of element %d is %d\n", i+1, *( ptr +i));
//     }
// }
// void printarray(int ptr[], int n ){
//     for(int i=0;i<n;i++){
//         printf("The value of element %d is %d\n", i+1, *( ptr +i));
//     }
// }
void printarray(int ptr[], int n ){
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    ptr[2]=555;// This value will be changed in arr array of main as well
}


int main(){
    int arr[]={2,3,54,53,74,73,24};
    printarray( arr, 7);
    printf("%d", arr[2]);
    return 0;
}