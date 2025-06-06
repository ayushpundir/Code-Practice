#include <stdio.h>
void npositive(int mac[], int n){
    int num=0;
    for(int i=0;i<n;i++){
        if(mac[i]>=0){
            num++;
        }
    }
     printf("Number of positive integers=%d", num);
}
int main(){
    int arr[]={2,75,86,-6,3,-53,-64};
    npositive(arr, 7);
    return 0;
}