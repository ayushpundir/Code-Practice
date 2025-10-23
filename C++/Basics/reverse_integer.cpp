#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    double ans=0;
    while(n!=0){
       int num=n%10;
       ans=10*ans+num;
       n=n/10;
    }
    if(ans<=(-pow(2,32)) && ans>=(pow(2,32)-1)){
        cout<<ans;
    }
    else{
        cout<<"0";
    }
}