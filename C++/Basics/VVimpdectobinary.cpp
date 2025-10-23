#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n=5;
    
    int ans = 0;
    int i = 0;
    while(n != 0){

        int bit = n&1;

        //int ans=(pow(10, 2)+1e-9);
        double ans=(pow(10, 2));
        //int ans=round(pow(10, 2));
         cout<< ans<<endl;
        i++;
        n = n >> 1;
    }
    //cout<< ans << endl;

}