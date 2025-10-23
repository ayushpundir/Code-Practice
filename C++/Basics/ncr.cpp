#include <iostream>
using namespace std;

int factorial(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
}
int ncr(int n,int r){
    int answer=factorial(n)/( factorial(r) * factorial(n-r) );
    return answer;
}

int main(){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    int val = ncr(n,r);
    cout<<"The value of nCr is: "<<val;
    return 0;

}