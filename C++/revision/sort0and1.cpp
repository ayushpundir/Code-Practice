#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=7;
    int unsortedarray[n]={0,1,1,0,1,0,1};
    int i=0;
    int j=n-1;

    while(i<j){
        while(unsortedarray[i]==0 && i<j){
            i++;
        }
        while(unsortedarray[j]==1 && i<j){
            j--;
        }
        if(i<j){
        swap(unsortedarray[i],unsortedarray[j]);
        i++;
        j--;
        }
    }
    print(unsortedarray, n);
    return 0;
}