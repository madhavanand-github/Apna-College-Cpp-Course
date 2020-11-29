#include<iostream>
#include<string>
using namespace std;

string removeDuplicate(string s){

    // Base Case
    if(!s.length())
        return "";
    

    char ch=s[0];
    string ans = removeDuplicate(s.substr(1));

    if(ch==ans[0])
        return ans;
    
    return(ch+ans);

}

int main(){

    cout<<removeDuplicate("aabbbccdd");
    return 0;

}