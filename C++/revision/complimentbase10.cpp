#include <iostream>
using namespace std;

// int main(){
//     int n=5;
//     int x=1;

//     while(x<=n){
//         n=n^x;
//         x=x<<1;
//     }
//     cout<<n;
//     return 0;
// }

int main(){
    int n=10;
    int mask=0;
    int m=n;

    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    cout<<((~n)&mask);
    return 0;
}