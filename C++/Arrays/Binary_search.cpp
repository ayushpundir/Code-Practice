#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    int mid=start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start = mid+1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}

int main(){
    int odd[5]={3,5,7,9,11};
    int even[6]={2,4,6,8,10,12};

    int oddindex = binarysearch(odd, 5, 11);
    cout<<"Key 11 in odd array is at index "<<oddindex<<endl;

    int evenindex = binarysearch(even, 6, 9);
    cout<<"Key 9 in even array is at index "<<evenindex<<endl;

    return 0;
}

