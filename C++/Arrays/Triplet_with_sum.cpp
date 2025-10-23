#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int s=12;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
            }
        }
    }
    return 0;
}