#include <iostream>
#include <vector>
using namespace std;

void mergesort(int arr1[],int n,int arr2[],int m,vector<int> arr3){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
        arr3.push_back(arr1[i]);
        i++;
        }
        else{
            arr3.push_back(arr2[j]);
            j++;
        }
    }
//while loop written below will complete the array 
//from both the while loop only one will be executed
    while(i<n){//here i is not zero
    arr3.push_back(arr1[i]);
    i++;
    }

    while(j<m){//here i is not zero
    arr3.push_back(arr2[j]);
    j++;
    }

    int s=arr3.size();
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int n=8,m=3;
    int arr1[n]={1,3,4,6,7,9,10,11};
    int arr2[m]={2,5,8};

    vector<int> arr3;

    mergesort(arr1,n,arr2,m,arr3);
}