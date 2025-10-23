#include <iostream>
using namespace std;

long long int sqrt(int x){
    int s=0,e=x;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int sq=mid*mid;
        if(mid==x){
            return mid;
        }
        else if(sq>x){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int x=19223762;
    long long int ans=sqrt(x);
    cout<<ans;
    return 0;

}