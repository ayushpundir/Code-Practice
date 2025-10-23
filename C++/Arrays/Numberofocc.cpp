#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int k){
    int s=0;
    int end=n-1;
    int mid=s+(end-s)/2;
    int first=-1;

    while(s<=end){
        if(arr[mid]==k){
            first=mid;
            end=mid-1;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(end-s)/2;
    }
    return first;
}

int lastocc(int arr[], int n, int k){
    int s=0;
    int end=n-1;
    int mid=s+(end-s)/2;
    int last=-1;

    while(s<=end){
        if(arr[mid]==k){
            last=mid;
            s=mid+1;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(end-s)/2;
    }
    return last;
}

int main(){
    int arr1[5]={1,2,3,3,5};
    int arr2[10]={2,2,2,2,2,2,2,3,4,7};

    int index1=firstocc(arr2,10,2);
    int index2=lastocc(arr2,10,2);

    int total=(index2-index1)+1;

   

    cout<<"total occurrence of 2 is "<<total<<endl;

return 0;
}