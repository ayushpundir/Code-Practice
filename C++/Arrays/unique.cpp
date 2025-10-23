// #include <iostream>
// using namespace std;

// int unique(int arr[],int n){

//     for(int i=0;i<n;i++){
//         int a=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 ++a;
//             }
//         }
//         if(a==1){
//             return arr[i];
//         }
//     }

// }

// int main(){
//     int arr[7]={2,3,4,2,7,3,7};

//     int n = unique(arr,7);
//     cout<<"The unique element is: "<<n<<endl;
//     return 0;
// }

// Optimal solution using xor

#include <iostream>
using namespace std;

int main(){
    int ans=0;
    int arr[7]={7,3,5,2,5,3,7};
    int n=7;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
        // a^a=0;
        // 0^a=a;
    }
    cout<<ans;
    return 0;
}
