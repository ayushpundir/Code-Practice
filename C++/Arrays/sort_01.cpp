//my way

#include <iostream>
using namespace std;

int main(){
    int arr[6]={1,0,0,0,1,0};
    int n=6;
    int i=0,j=n-1;

    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//Sir way

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[6]={0,1,0,1,1,0};
//     int n=6;
//     int i=0,j=n-1;

//     while(i<j){

//         while(arr[i]==0 && i<j){
//             i++;
//         }

//         while(arr[j]==1 && i<j){
//             j--;
//         }

//         //agar yaha pohoch gaye ho, iska matlab
//         //arr[i]==1 and arr[j]==0
        
//         if(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//         }
        

//     }
//     for(int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }
