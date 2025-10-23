#include <iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;

    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}

int Allocatebooks(int arr[], int n, int m){
    int ans=-1;
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    int mid=start+(end-start)/2;
    while(start<=end){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}



int main(){
    int n=4;//number of books
    int m=2;//number of students
    int arr[n]={5,17,100,11};
    cout<<Allocatebooks(arr,n,m);
    return 0;}