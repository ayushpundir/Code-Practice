#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter ch: ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase"<<endl;
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"Uppercase"<<endl;
    }
    else if(ch>=47&&ch<=57){/*Either enter ASCII code or enter the 
    number in bracket*/
        cout<<"Number";
    }//
}