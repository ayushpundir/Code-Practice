// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int x= -234;
//     int ans=0;
//     while(x){
//         int num=x%10;
//         cout<<num<<" "<<endl;
//         if(ans>INT_MAX/10 || ans<INT_MIN/10)
//         return 0;
//         ans=ans*10+num;
//         cout<<ans<<endl;
//         x=x/10;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int x=-53768;
    long long int ans =0;

    while(x){
        int num=x%10;
        ans=ans*10+num;
         if(ans>INT_MAX || ans<INT_MIN){
            return 0;
        }
        x/=10;
    }
 cout<<ans;
 return 0;
}
