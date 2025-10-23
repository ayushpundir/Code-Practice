//better program solution is also there named ekoeko_spoj
#include <iostream>
using namespace std;

int maxheight(int arr[],int n,int M){

    int ans=-1;
    int start=0;
    int end=-1;

    for(int i=0;i<n;i++){
        end=max(arr[i],end);
    }

    int mid=start+(end-start)/2;

    while(start<=end){

        int woodgathered=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                 woodgathered=woodgathered+arr[i]-mid;
            }
        }

        if(woodgathered<=M){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }
    return ans;
}

int main(){
    int n=5;//number of trees each element indicate h of tree
    int M=20;//wood required
    int arr[n]={4,42,40,26,46};
    cout<<maxheight(arr,n,M);
    return 0;
}