#include <iostream>
using namespace std;

bool ispossible(int arr[],int n,int s,int mid){
    int pagesum=0;
    int studentcount =1;

    for(int i=0;i<n;i++){
        if(pagesum+arr[i] <= mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>s || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int allocatebooks(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1;
    int e=sum;

    int mid=s+((e-s)/2);
  

    while(s<=e){
        if(ispossible(arr, n, m , mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        cout<<ans<<endl;
    }
    return ans;
}

int main(){
    int n=4,m=2;
    int arr[n]={10,20,30,40};
    cout<<allocatebooks(arr,n,m);
    return 0;
}