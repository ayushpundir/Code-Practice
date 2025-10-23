#include <iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n]={10,1,7,6,14,9};

    for(int i=1;i<n;i++){
//for round 1 to n-1

bool swapped=false;//OPTIMISATION for best case

        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){//OPTIMISATION for best case
            break;
        }


    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}