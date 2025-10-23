#include <iostream>
using namespace std;

void swap(int arr[], int n){

    for(int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        //swap(arr[i],arr[i+1]);
    }

}

int main(){
    int n=6;
    int arr[7]={1,2,3,4,5,6};

    swap(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}