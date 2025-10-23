#include <iostream>
using namespace std;

void largestrow(int arr[][4],int row,int col){
    int ans=-1;
    int rowindex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>ans){
            ans=sum;
            rowindex=i;
        }
    }
    cout<<rowindex<<" "<<ans;
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11};
    largestrow(arr,3,4);
}