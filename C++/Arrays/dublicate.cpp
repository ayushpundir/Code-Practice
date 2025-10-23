#include <iostream>
using namespace std;

int main(){
    int n=7;
    int arr[7]={1,3,2,4,7,6,1};
    int ans=0;

    for(int i=0;i<n;i++){
    ans=ans^arr[i];
    }

    for(int j=1;j<n;j++){
        ans=ans^j;
    }

    cout<<ans;

    return 0;
}