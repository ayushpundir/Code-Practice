// #include <iostream>
// using namespace std;

// long long int sqrtint(int x){
//     int s=0,e=x;
//     long long int mid=s+(e-s)/2;
//     long long int ans=-1;
//     while(s<=e){
//         long long int sq=mid*mid;
//         if(mid==x){
//             return mid;
//         }
//         else if(sq>x){
//             e=mid-1;
//         }
//         else{
//             ans=mid;
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// double moreprecision(int x, int precision,int tempans){
//     double factor=1;
//     double ans=tempans;
//     for(int i=0;i<precision;i++){
//         factor=factor/10;
//         for(double j=ans;j*j<x;j=j+factor){
//             ans=j;
//         }
//     }
//     return ans;
// }

// int main(){
//     int x=37;
//     long long int tempans=sqrtint(x);
//     double ans=moreprecision(x,3,tempans);
//     cout<<ans<<endl;
//     return 0;

// }
//practice 
#include <iostream>
using namespace std;

long long int tempans(int x){
    int s=0,e=x;
    int mid=s+(e-s)/2;
    int ans=-1;
    long long int sq=mid*mid;
    while(s<=e){
        if(sq==x){
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
double moreprecision(int x,int precision){
    double factor=1;
    double ans=tempans(x);
    for(int i=0;i<precision;i++){
        factor=factor/10;
            for(double j=ans;j*j<x;j+=factor){
                ans=j;
            }
    }
    return ans;
}
int main(){
    cout<<moreprecision(36,3);
    return 0;
}