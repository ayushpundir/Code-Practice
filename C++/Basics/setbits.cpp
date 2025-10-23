#include<iostream>
using namespace std;

int bits(int a){
    int bit=0;
    while(a!=0){
    if(a&1==1){
        bit++;
    }
    a=a>>1;
}
return bit;
}
int setbits(int a, int b){
    int ans= bits(a) + bits(b);
    return ans;
}

int main(){
    int n1,n2;
    cout<<"Enter n1: ";
    cin>>n1;

    cout<<"Enter n2: ";
    cin>>n2;
    
    cout<<"Number of setbits is "<<setbits(n1,n2);

    return 0;
}