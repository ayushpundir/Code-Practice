#include<iostream>
using namespace std;

int main(){
    int amt;
    cout<<"Enter Amount";
    cin>>amt;

    int Rs100,rs50,rs20,rs1;
    switch(1){

        case 1:Rs100=amt/100;
        cout<<Rs100<<" notes of 100"<<endl;
        amt=amt - Rs100*100;//0r amt=amt%100;

        case 2:rs50=amt/50;
        cout<<rs50<<" notes of 50"<<endl;
        amt=amt - rs50*50;//0r amt=amt%50;

        case 3:rs20=amt/20;
        cout<<rs20<<" notes of 20"<<endl;
        amt=amt - rs20*20;//0r amt=amt%20;

        case 4:rs1=amt/1;
        cout<<rs1<<" notes of 1"<<endl;
        

    }

}