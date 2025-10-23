#include <iostream>
using namespace std;

int main(){
    int sum=7;
    int n=5;
    int arr[5]={1,3,2,4,1};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"The triplet is "<<arr[i]
                    <<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}