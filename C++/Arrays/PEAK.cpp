#include <iostream>
using namespace std;

int peakofmountainarray(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;
}

int main(){
    int arr[4]={5,4,3,0};
    cout<<"Peak value is "<<arr[peakofmountainarray(arr,4)];
    return 0;
}