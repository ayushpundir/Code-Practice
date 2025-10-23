#include <iostream>
using namespace std;

int ways(int n){
    //base case
    if(n<0)
    return 0;
    if(n==0)
    return 1;

    return ways(n-1) + ways(n-2);
}

int main(){
    //climb stairs
    int n=5;
    cout<<ways(n);
    return 0;
}