#include <iostream>
using namespace std;

int pivot(int arr[], int n){
    int start=0,end=n-1,mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){//1st line
            start=mid+1;
        }
        else {//second line
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int binarysearch(int arr[],int s,int e, int key){
    int start=s,end=e,mid=start+(end-start)/2;
    while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return -1;
}

int main(){
    int n=6;
    int arr[6]={7,9,10,2,3,4};
    int key=9;
    int p=pivot(arr,n);
    if(key>=arr[0]){
        int ans=binarysearch(arr,0,p-1,key);
        cout<<ans;
    }
     else{
        int ans=binarysearch(arr,p,n-1,key);
        cout<<ans;
    }
    return 0;
    }