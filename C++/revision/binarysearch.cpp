#include <iostream>
using namespace std;

int main(){
    int arraysize=9;
    int arraytosearched[9]={2,7,23,34,45,56,67,68,78};
    int s=0,e=arraysize;
    int mid=s+(e-s)/2;
    
    int findindexof=78;

    while(s<=e){
        if(arraytosearched[mid]==findindexof){
            cout<<"present at index: "<<mid;
            return 0;
        }
        else if(arraytosearched[mid]<findindexof){
            s=mid+1;
        }
        else if(arraytosearched[mid]>findindexof){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
return 0;
}