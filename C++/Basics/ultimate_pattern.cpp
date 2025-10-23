//MY METHOD

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
            

//     int val=n;        
//     for(int j=1;j<=i;j++){ //part 1
//         cout <<val<<" ";
//         val--;
//     }

//     for(int k=1;k<=n-i;k++){ //part 2
//         val=n-i+1;
//         cout<<val<<" ";
//     }
            
//     for(int l=1;l<=n-i;l++){// part 3
//         val=n-i+1;
//         cout<<val<<" ";
//     }
            
//         val=n-i+2;
//     for(int m=1;m<=i-1;m++){//4
//         cout<<val<<" ";
//         val++;
//     }
//         cout<<endl;
//     }
//         for(int i=1;i<n;i++){
            
//             int val=n;
            
//         for(int l=1;l<=n-i;l++){//part 5
//             cout<<val<<" ";
//             val--;
//     }

//         val=i+1;
//         for(int m=1;m<=i;m++){ //part 6
//             cout<<val<<" ";
//     }
            
//         val=i+1;
//         for(int k=1;k<=i;k++){//part 7
//             cout<<val<<" ";
//     }

//             val=i+2;
//             for(int q=1;q<=n-i-1;q++){//part 8
//                 cout<<val<<" ";
//                 val++;
//             }
//         cout<<endl;
//         }
// }


// ULTIMATE METHOD



#include <iostream>
using namespace std;

int main(){
    int n=5;
 for(int i=n;i>1;i--)
        {
            for(int j=n;j>i;j--)
            {
                cout<<j<<" ";
            }
            for(int j=1;j<=2*i-1;j++)
            {
                cout<<i<<" ";
            }
            for(int j=i+1;j<=n;j++)
            {
                cout<<j<<" ";
            }
            
            cout<<endl;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>i;j--)
            {
                cout<<j<<" ";
            }
            for(int j=1;j<=2*i-1;j++)
            {
                cout<<i<<" ";
            }
            for(int j=i+1;j<=n;j++)
            {
                cout<<j<<" ";
            }
            
            cout<<endl;
        }
}