#include <iostream>
using namespace std;

int main()
{
    int N=22074;
    int i=0;
        int Nval=N;
        while(N!=0){
          int n=N%10;
           if(n!=0 && Nval%n==0){
               i++;
           }
           N=N/10;
        }
        cout<<i;
    
}