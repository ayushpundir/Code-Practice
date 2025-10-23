#include <iostream>
using namespace std;

int power(){
    int a, b;
    cin>>a>>b;
    int ans=1;

    for (int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int a=power();
    cout<<"The answer is: "<<a;
    return 0;
}
// or
// #include <iostream>
// using namespace std;

// int power(int a, int b){
//     int ans=1;

//     for (int i=0;i<b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){
//     int a, b;
//     cout<<"Enter value of a and b: ";
//     cin>>a>>b;
//     int ans=power(a, b);
//     cout<<"The answer is: "<<ans;
//     return 0;
// }