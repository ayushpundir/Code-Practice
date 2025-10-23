#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a=0,b=1,num;
    cout<<a<<", "<<b;
    for(int i=0;i<=n;i++){
    num=a+b;
        cout<<num<<", ";
        a=b;
        b=num;
    }
}