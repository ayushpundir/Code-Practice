#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        int num=i;
        while(j<=n-i+1){
            cout<<num;
            num=num+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}