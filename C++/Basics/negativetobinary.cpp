/*solution to this question is given in handwritten notes of lecture
5, the solution given below is not correct for all*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    n=abs(n);
    n=~n;
    n=n+1;
    int ans = 0;
    int i=0;
    while(i<4){
        int bit=n&1;
        ans=round(pow(10, i)*bit) + ans;
        i++;
        n=n>>1;
    }
    cout<<ans;
}