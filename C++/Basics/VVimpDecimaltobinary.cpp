#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    double ans = 0;
    int i = 0;
    while(n != 0){

        int bit = n&1;

        //ans = round(pow(10, i)*bit) + ans;
        ans = (pow(10, i)*bit) + ans;

        i++;
        n = n >> 1;
    }
    cout<< ans << endl;

}