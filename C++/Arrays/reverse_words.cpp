#include <iostream>
#include <vector>
using namespace std;

// Function to reverse any sequence
// starting with pointer begin and
// ending with pointer end
void reverse(string& s, int begin, int end)
{
 
    while (begin < end) {
        swap(s[begin++], s[end--]);
    }
}
 
// C++ program for above approach
 
void reverseWords(string& s)
{
    int word_begin = -1;
 
    //  /* temp is for word boundary */
    int i = 0;
 
    /*STEP 1 of the above algorithm */
    while (i < s.size()) {
 
        /*This condition is to make sure that the
          string start with valid character (not
          space) only*/
        if ((word_begin == -1) && (s[i] != ' ')) {
            word_begin = i;
        }
        if (word_begin != -1
            && ((s[i + 1] == ' ') || (i + 1 == s.size()))) {
            reverse(s, word_begin, i);
            word_begin = -1;
        }
        i++;
    } /* End of while */
 
    /*STEP 2 of the above algorithm */
    reverse(s, 0, s.size() - 1);
}
 
// Driver Code
int main()
{
    string s = "i like this program very much";
 
    // Function call
    reverseWords(s);
    cout << s << endl;
    ;
    return 0;
}
// *
// *
// *
// *
// //approach 2
// *
// *
// *
// *
// *
// #include <iostream>
// #include <vector>
// using namespace std;


// void reverseWords(string s)
// {
 
//     // temporary vector to store all words
//     vector<string> tmp;
//     string str = "";
//     for (int i = 0; i < s.length(); i++) {
 
//         // Check if we encounter space
//         // push word(str) to vector
//         // and make str NULL
//         if (s[i] == ' ') {
//             tmp.push_back(str);
//             cout<<str<<endl;
//             str = "";
//         }
 
//         // Else add character to
//         // str to form current word
//         else
//             str += s[i];
//     }
 
//     // Last word remaining,add it to vector
//     tmp.push_back(str);
 
//     // Now print from last to first in vector
//     int i;
//     for (i = tmp.size() - 1; i > 0; i--)
//         cout << tmp[i] << " ";
//     // Last word remaining,print it
//     cout << tmp[0] << endl;
// }
 
// // Driver Code
// int main()
// {
//     string s = "i like this program very much";
//     reverseWords(s);
//     return 0;
// }
// *
// *
// *
// *
// //my trial
// *
// *
// *
// *
// *
// #include <iostream>
// #include <vector>
// using namespace std;

// string reverse(string st,int i){
//     int s=0;
//     int e=i-1;
//     while(s<=e){
//     swap(st[s++],st[e--]);
//     }
//     return st;
// }

// int main(){
//     string st="my";
//     vector <string> temp;
//     temp.push_back(st);
//     cout<<st;
//     string word="";
    
//     for(int i=0;i<st.length();i++){
//         if(st[i]==' '){
//             word+=reverse(st,i);
//         }
//     }
//     cout<<word;
//     return 0;
// }