#include <iostream>
using namespace std;

void print( int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=9;
    int arr[9]={0,2,2,1,0,1,1,0,2};
    int i=0,j=n-1;

    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]!=0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    //i=3
    int k=8;
    while(i<k){
        if(arr[i]==1){
            i++;
        }
        else if(arr[k]==2){
            k--;
        }
        else{
            swap(arr[i],arr[k]);
            i++;
            j--;
        }
    }
    print (arr, 9);
    return 0;
}