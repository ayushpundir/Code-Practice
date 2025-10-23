//by myself
#include <iostream>
using namespace std;

string replace(string &s){
    int len=s.length();
     for(int i=0;i<len;i++){
        if(s[i]!=' '){
            s+=s[i];
        }
        else{
            s+="@40";
        }

    }
    return s;
}

int main(){
    string s="My name is Ayush Pundir";
    string temp=replace(s);
    cout<<temp;

    return 0;
}
//by love bhaiya 
// #include <iostream>
// #include <cstring>
// using namespace std;

// string replace(string &s){
//     string temp="";
//      for(int i=0;i<s.length();i++){
//         if(s[i]==' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');            
//         }
//         else{
//             temp.push_back(s[i]);
//         }
//     }
//     return temp;
// }

// int main(){
//     string s="My name is Ayush Pundir";
//     string temp=replace(s);
//     cout<<temp;

//     return 0;
// }