#include <iostream>
using namespace std;

bool find(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5]={3,5,73,8,3};
    cout<<"What are you looking for??? ";
    int key;
    cin>>key;

    bool found=find(arr, 5, key);

    if( found ){
        cout<<"Key is present";
    }
    else{
        cout<<"key is absent";
    }
    return 0;
}