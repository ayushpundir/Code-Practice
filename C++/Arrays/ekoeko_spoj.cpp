#include <iostream>
using namespace std;

bool ispossibleans(int trees[],int n,int m,int mid){
    int woodgathered=0;

    for(int i=0;i<n;i++){
        if(trees[i]>mid){
            woodgathered+=trees[i]-mid;
        }
    }
    if(woodgathered<m){
            return false;
        }
        return true;
}
// if(woodgathered>=m){
//             return true;
//         }
//         return false;

int main(){
    int n=5;
    int trees[n]={4,42,40,26,46};
    int m=20;//wood required
    
    int e=0;
    for(int i=0;i<n;i++){
        e+=trees[i];
    }
    int s=0;
    int mid=s+(e-s)/2;
    int height=-1;
    while(s<=e){
    if(ispossibleans(trees,n,m,mid)){
        height=mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
    }
    cout<<height;
    
    return 0;
}