#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int star=i-1;
        while(star){
            cout<<"*";
            star=star-1;
        }
        int star2=i-1;
        while(star2){
            cout<<"*";
            star2=star2-1;
        }
        int last=n-i+1;
        while(last){
            cout<<last;
            last=last-1;
        }
        cout<<endl;
        i=i+1;
    }
}