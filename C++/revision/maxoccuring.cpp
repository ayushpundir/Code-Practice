#include <iostream>
using namespace std;

int main(){
    int arr[5]={3,5,7,7,7};
    int store[10]={0};

    for(int i=0;i<5;i++){
        store[arr[i]]++;
    }
    int max=-1;
    int j=0;
    int element;
    for(;j<9;j++){
        if(store[j]>max){
        max=store[j];
        element = j;
        }
    }
    cout<<"Element with maximum occurence : "<<element<<" occured "<<max<<" times"<<endl;
    return 0;
 }