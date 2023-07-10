#include<bits/stdc++.h>
using namespace std;

int main(){

    // My Method - Tricky & Short
    string s = "aassdd";
    string ans = s;
    int eraseIndex=0;
    for (int i = 1; i < s.size(); i++)
        if(s[i-1]==s[i])
            ans.erase(i-eraseIndex,1),eraseIndex++;
    
    cout<<ans<<endl;

    // Instructor's Method

    /* Problem with this code
    1. ans2 char output is wierd  */
    string str = "aassdd";
    char ans2[100];
    ans2[0]=str[0];
    int cnt=1;
    for (int i = 1; i < str.size(); i++)
        if(str[i]!=str[i-1])
            ans2[cnt]=str[i],cnt++;
    
    cout<<ans2<<endl;
    
    return 0;
}