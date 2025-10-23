#include <iostream>
using namespace std;

// int peak(int mount[],int n){
//     int start=0,end=n-1;
//     int mid = start+(end-start)/2;
//     int ans;

//     while(start<=end){
//         if(mount[mid]>mount[mid-1] && mount[mid]>mount[mid+1]){
//             ans=mount[mid];
//             return ans;
//         }
//         if(mount[mid]<mount[mid+1]){
//             start=mid+1;
//         }
//         if(mount[mid]>mount[mid+1]){
//             end=mid-1;
//         }
//         mid = start+(end-start)/2;
//     }
// }
int peakbybabbar(int arr[],int n){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
        ans= arr[mid];
    }
return ans;
}

int main(){
    int n=5;
    int arr[n]={3,4,5,2,1};
  
    cout<<"Peak element is : "<<peakbybabbar(arr,n);
    return 0;

}