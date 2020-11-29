#include<iostream>
#include<string>
using namespace std;

void subseq(string s, string ans){

    // Base Case
    if (!s.length())
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main(){

    subseq("ABC","");
    return 0;
}