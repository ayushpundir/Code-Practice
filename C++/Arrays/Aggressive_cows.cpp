#include <iostream>
using namespace std;

bool ispossible(int arr[],int n, int k,int mid){
    int cowcount =1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false; 
}

int safedistance(int arr[],int n,int k){
    int ans=-1;
    int start=0;
    int end=-1;
    for(int i=0;i<n;i++){
        end=max(end,arr[i]);
    }
    int mid=start+(end-start)/2;
    while(start<=end){
        if(ispossible(arr,n,k,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int n=5;//number of stalls
    int k=2;//number of cows
    int arr[n]={1,2,3,4,6};//sorted array
    cout<<safedistance(arr,n,k);
    return 0;
}
