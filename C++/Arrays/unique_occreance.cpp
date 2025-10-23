//wrong!!!!!!!!!!

#include <iostream>
using namespace std;

int main(){
    int arr[7]={1,5,5,3,1,1,1};
    int n=7;
    int store[3];

    for(int i=0;i<n;i++){

        for(int k=i;k>0;k--){
            if(arr[i]==arr[k]){
                break;
            }
        }
        int ans =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                ++ans;
            }
            store[i]=ans;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3 && j!=i;j++){
            if(store[i]==store[j]){
                cout<<"no"<<endl;
                return 0;
            }
        }
    }
    cout<<"yes";
return 0;
}