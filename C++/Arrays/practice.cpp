#include <iostream>
using namespace std;

int main(){
    int n=7;
    int ans=0;
    int arr[n]={1,2,3,4,5,6,3};
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int j=1;j<n;j++){
        ans=ans^j;
    }
    cout<<ans;
    return 0;
}