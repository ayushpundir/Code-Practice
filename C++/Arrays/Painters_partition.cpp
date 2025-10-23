#include <iostream>
using namespace std;

bool ispossible(int arr[],int n,int k, int mid){
    int paintercount=1;
    int unitsum=0;

    for(int i=0;i<n;i++){
        if(unitsum+arr[i]<=mid){
            unitsum+=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>k || arr[i]>mid){
                return false;
            }
            unitsum=arr[i];
        }
    }
    return true;
}

int mintimetaken(int arr[],int n,int k){
    int s=0;
    int e=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        e+=arr[i];
    }
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n=4;//no. of board
    int k=2;//no. of painters
    int arr[n]={5,5,5,5};
    cout<<mintimetaken(arr,n,k);
    return 0;
    }