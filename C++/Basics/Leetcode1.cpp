#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int product=1;
    int sum=0;
    while(n!=0){
        product*=n%10;
        sum+=n%10;
        n=n/10;
    }
    cout<<"Product "<<product<<endl;
    cout<<"Sum "<<sum<<endl;
    cout<<"Ans "<<product-sum;
}