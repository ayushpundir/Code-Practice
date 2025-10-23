#include <iostream>
using namespace std;

bool possibleans(int arr[],int n,int m, int mid){

    int dishesmade=0;
    int count;
    int time;


    for(int i=0;i<n;i++){

        time=0;
        count=1;

        while(true){
        
        if(time+(arr[i]*count)<=mid){
            time+=arr[i]*count;

            dishesmade++;
            count++;
            if(dishesmade==m){
                return true;
            }
        }
        else{
            break;
        }

    }
    }

   
    return false;
}


int main(){
    int n=4;
    int cook[n]={1,2,3,4};
    int m=11;
    int maxtime=cook[n-1]*m;
    int start=0;
    int end=maxtime;
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end){
        if(possibleans(cook,n,m,mid)){
            end=mid-1;
            ans=mid;
    }
    else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
    }
    cout<<ans;
    return 0;

}
// #include <iostream>
// #include <math.h>
// #include <limits.h> 
// using namespace std;

// bool isPossible(int arr[],int m,int mid){
// int count;
//     int dish = 0;
//     int time;
    
//     for(int i = 0; i<4; i++)
//     {
//         time = 0;
//         count = 1;
//         while(true)
//         {
//             if( (time + (count * arr[i]) ) <= mid)
//             {          
//                 time += count * arr[i];
//                 dish++;
//                 count++;
//                 if(dish == m)
//                     return true;
//             }
//             else
//                 break;
//         }
//     }
    
//     return false;
    
// }

// int main()
// {
//     int arr[4]={1,2,3,4};
//     int m=11; 
//     int s = 0;
//     int maxi = -1;

//     for(int i = 0; i<4; i++)
//         maxi = max(maxi, arr[i] );
    
//     int e = maxi * m * (m+1)/2;
//     int mid = s + (e-s)/2;
//     int ans = -1;
    
//     while(s<=e)
//     {
//         if(isPossible(arr, m, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//             s = mid + 1;
//         mid = s + (e-s)/2;
//     }
//     cout<<ans;
//     return 0;
// }