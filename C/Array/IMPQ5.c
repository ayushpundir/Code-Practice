#include <stdio.h>
void reverse(int ptr[], int n){
    for(int i=0;i<n/2;i++){
        int temp=ptr[i];
        ptr[i]=ptr[n-1-i];
        ptr[n-1-i]=temp;
        //printf("The new value of element %d is %d\n", i+1, ptr[i]);
    }
}
int main(){
    int arr[3]={12,42,53};
    for(int i=0;i<3;i++){
        printf("The original value of element %d is %d\n", i+1, arr[i]);
    }
    reverse( arr, 3);
    for(int i=0;i<3;i++){
        printf("The new value of element %d is %d\n", i+1, arr[i]);
    }

    return 0;
}