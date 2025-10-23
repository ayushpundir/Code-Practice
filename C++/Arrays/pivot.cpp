#include <iostream>
using namespace std;

int pivot(int arr[], int n){
    int s=0,e=n-1,mid=s+(e-s)/2;
   
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        }
        return s;//or return e;
    }

int main(){
    int arr[6]={7,9,10,2,3,4};//sorted and rotated
    cout<<"pivot index is "<<pivot(arr, 6);
    return 0;
}