// #include <iostream>
// #include <limits.h>
// using namespace std;

// void common(int arr[],int n, int brr[], int s){

//     for(int i=0;i<n;i++){

//         for(int j=0;j<s;j++){

//             if(arr[i]<arr[j]){//optimisation
//                 break;
//             }

//             if(arr[i]==brr[j]){
//                 cout<<arr[i]<<" ";
//                 brr[j] = INT_MIN;/*a number can be
//                 overlapped only once
//                 a number in brr which is once overlapped
//                 can't be overlapped again*/
//                 break;
//             }
//         }
//     }
// }

// int main(){

//     int arr[7]={2,5,6,9,2,1,2};
//     int brr[6]={3,4,2,1,0,2};

//     common(arr, 7, brr, 6);

//     return 0;

// }

// More optimised solution
#include <iostream>
using namespace std;

int main()
{
    int n = 7, s = 6;
    /*Arrays are in increasing order given in the 
    question*/
    int arr[7] = {1, 2, 2, 3, 5, 6,9 };
    int brr[6] = {0, 1, 2, 2, 3, 4};
    int i = 0, j = 0;

    while (i < n && j < s)
    {

        if (arr[i] == brr[j])
        {
            cout << arr[i] << " ";
            i++; 
            j++;
        }
        else if (arr[i] < brr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return 0;
}