#include <iostream>
using namespace std;

bool valid(char ch){
    if(ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z' || ch>='0'&&ch<='9'){
        return 1;
    }//or use isalnum(ch)
    return 0;
}
char tolowercase(char ch){
    if(ch>='a'&&ch<='z' || ch>='0'&&ch<='9'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkpalindrome(string st){
    int s=0;
    int e=st.length()-1;
    while(s<=e){
        if(st[s]!=st[e]){
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    string s="A man, a plan, A canal: Panama";
    string v;
    for(int i=0;i<s.length();i++){
        if(valid(s[i])){
            v.push_back(s[i]);
        }
    }
    for(int i=0;i<v.length();i++){
        v[i]=tolowercase(v[i]);
    }

    cout<<"String palindrome check: "<<checkpalindrome(v);
    
    return 0;
}
//doubt
// #include <iostream>
// using namespace std;

// char tolowercase(char ch){
//     if(ch>='a'&&ch<='z' || ch>='0'&&ch<='9'){
//         return ch;
//     }
//     else{
//         char temp=ch-'A'+'a';
//         return temp;
//     }
// }
// bool checkpalindrome(string st){
//     int s=0;
//     int e=st.length()-1;
//     while(s<=e){
//         if(st[s]!=st[e]){
//             return 0;
//         }
//         else {
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// int main(){
//     string s="A man, a plan, A canal: Panama";

//     for(int i=0;i<s.length();i++){
//     if(!isalnum(s[i])){
//         s.pop_back();
//     }
//     }
//     cout<<s;

//     for(int i=0;i<s.length();i++){
//         s[i]=tolowercase(s[i]);
//     }

//     cout<<"String palindrome check: "<<checkpalindrome(s);
    
//     return 0;
// }