#include <iostream>//Header file
using namespace std;

int main(){
    int a=-5;
    cout << a << endl;
    int size=sizeof(a);
    cout << "The size of a is: " << size << endl;
    int b='c';//Type casting
    cout << b << endl;
    char c =114;//Type casting
    cout << c << endl;
    int o,p;
    cout<<"Enter the value of o: ";
    cin>>o;//user input
    //cin>>o>>p;Agar 2 number ka ek sath lena ho toh
    cout<<"o is :"<<o;
}