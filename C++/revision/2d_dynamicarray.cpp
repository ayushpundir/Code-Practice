#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the value of n and m: ";
    cin>>n>>m;
    // int *arr=new int[n];

    // cout<<"Enter n terms: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // cout<<"The array is : ";
    // for(int j=0;j<n;j++){
    //     cout<<arr[j]<<", ";
    // }

    //2d
    int **arr2 = new int*[n];
    for(int i=0;i<n;i++){
        arr2[i] = new int[m];
    }
    cout<<"Enter elements row-wise : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Elements of 2d array are: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr2[i][j]<<", ";
        }
    }

    //releasing memory
    for(int i=0;i<n;i++){
        delete [] arr2[i];
    }

    delete []arr2;

    return 0;
}