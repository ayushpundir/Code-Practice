#include <iostream>
using namespace std;
#include <limits.h>

int getmax(int arr[], int size){
    int maxi= INT_MIN;
    for(int i=0;i<size;i++){

        maxi=max(maxi,arr[i]);
        // or
        // if(arr[i]>maxi){
        //     maxi=arr[i];
        // }
    }
    return maxi;
}

int getmin(int arr[], int size){
    int mini= INT_MAX;
    for(int i=0;i<size;i++){

        mini=min(mini,arr[i]);
        // or
        // if(arr[i]<mini){
        //     mini=arr[i];
        // }
    }
    return mini;
}

int main(){
    int size,min,max;
    int arr[100];
    cout<<"How many elements do you want to enter: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    max=getmax(arr, size);
    min=getmin(arr, size);
   
    cout<<"max value is "<<max<<endl;
    cout<<"min value is"<<min;
}
