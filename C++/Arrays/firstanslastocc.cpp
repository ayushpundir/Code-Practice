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
    int arr2[6]={2,2,2,3,4,7};

    int index1=firstocc(arr2,6,2);
    int index2=lastocc(arr2,6,2);

    // To return pair(we can use array method also but 
    // this is better)
    // pair<int,int>p;
    // p.first=firstocc(arr2,6,2);
    // p.second=lastocc(arr2,6,2);
    // return p;

    cout<<"first occurrence of 2 is at index "<<index1<<endl;
    cout<<"last occurrence of 2 is at index "<<index2<<endl;

return 0;
}