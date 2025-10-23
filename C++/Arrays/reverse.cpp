#include <iostream>
using namespace std;

void reverse(int arr[], int n){
   int start=0,end=n-1;
   while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    //swap(arr[start], arr[end]);
    start++;
    end--;
   }
}

int main(){
    int arr[8]={3,5,6,7,1,4,2,8};

    reverse(arr, 8);

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

}