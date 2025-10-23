#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={5,4,3,2,1};
    int s=5;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s){
                if(arr[i]<arr[j]){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                }
                else{
                    cout<<arr[j]<<" "<<arr[i]<<endl;
                }
            }
        }
    }
    return 0;
}