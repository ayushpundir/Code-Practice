#include <iostream>
using namespace std;

bool binarysearch(int *arr,int s,int e,int k){
    if(s>e){
        return 0;
    }

    int mid=s+(e-s)/2;

    if(arr[mid]==k){
    cout<<"present at "<<mid<<endl;
    return 1;
    }

    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }

}

int main(){
    int n=6;
    int arr[6]={2,3,4,10,14,16};
    if(binarysearch(arr,0,n-1,16)){
        cout<<"PRESENT";
    }
    else{
        cout<<"FALSE";
    }
    return 0;
}