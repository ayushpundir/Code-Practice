#include <iostream>
using namespace std;

int main(){
    int n=64;
    if(n<=0){
        cout<<"false";
        return 0;
    }
    if((n&(n-1))==0){//flip the rightmost set bits
    //if this is true matlab number 2 ki power h
        cout<<"true";
        return 0;
    }
    cout<<"no";
    return 0;
}