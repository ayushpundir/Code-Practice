#include <iostream>
using namespace std;

int nth(int n){
    if(n==0){
        return 0;
    }
    int num=1,a=0,b=1;
    if(n>2){
    for(int i=1;i<=n-2;i++){
        num=a+b;
        a=b;
        b=num;
    }
    }
    return num;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The nth term is: "<<nth(n);
    return 0;
}
