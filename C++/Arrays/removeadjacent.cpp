//wrong 
//solve using recursion


// #include <iostream>
// using namespace std;

// bool checkwindow(int ch[]){
//     for(int i=0;i<26;i++){
//         if(ch[i]==2)
//         return true;
//     }
//     return false;
// }

// int main(){
//     string s="abbaca";
//     int i=0;
//     int windowsize=2;
//     int count[26]={0};
//     while(i<windowsize && i<s.length()){
//         int index=s[i]-'a';
//         count[index]++;
//         i++;
//     }
//     if(checkwindow(count)){
//         cout<<"sfusgsfsl";
//         s.erase(i-2,i-1);
//     }
//     while(i<s.length()){
//         char newchar=s[i];
//         int index=newchar-'a';
//         count[index]++;

//         char oldchar=s[i-windowsize];
//         index=oldchar-'a';
//         count[index]--;
//         cout<<s<<endl;
//         if(checkwindow(count)){
//         s.erase(i-1,i);
//         cout<<s<<" 1"<<endl;
//     }

//         i++;
//     }
//     cout<<s;
//     return 0;
// }



// //wrong
#include <iostream>
using namespace std;

int main(){
    string s="abbaca";
    int i=0;
    while(i<s.length()-1){
        if(s[i]==s[i+1]){
            cout<<s<<" "<<i<<endl;
            s.erase(i,2);
            cout<<s<<" "<<i<<endl;
            //i=0;
        }
        
            i++;
    }
    cout<<s;
    return 0;
}