#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int add=0;
    for(int i=0;i<n;i++){
        add=add+arr[i];
    }
    return add;
}

int main(){
    int size, arr[20];
    cout<<"Enter size: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Sum = "<<sum(arr, size);

}