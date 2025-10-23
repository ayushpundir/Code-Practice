// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         char ch='A'+i-1;
//         int j=1;
//         while(j<=n){
//             cout<<ch;
//             ch=ch+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
//or
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
             char ch='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}