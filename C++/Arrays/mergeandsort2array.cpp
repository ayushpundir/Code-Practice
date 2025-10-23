/*consider notes for better solution*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> mini;
    int num1[3]={1,2,3};
    int num2[3]={2,5,6};
    for(int i=0;i<3;i++){
        mini.push(num1[i]);
    }
    for(int i=0;i<3;i++){
        mini.push(num2[i]);
    }
    for(int i=0;i<6;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    return 0;

}