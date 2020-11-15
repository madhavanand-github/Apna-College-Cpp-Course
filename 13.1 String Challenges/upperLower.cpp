#include<bits/stdc++.h>
using namespace std;

int main(){

    
    string str = "GitHub";

    //To Uppercase
    for (int i = 0; i < str.length(); i++)
        if(str[i]>='a'&& str[i]<='z')
            str[i]-=32;
    cout<<str<<endl;

    //To Lowercase
    for (int i = 0; i < str.length(); i++)
        if(str[i]>='A'&& str[i]<='Z')
            str[i]+=32;
    cout<<str<<endl;
    
    str="GitHub";
    //Toggle Case
    for (int i = 0; i < str.length(); i++)
        if(str[i]>='a'&& str[i]<='z')
            str[i]-=32;
        else if(str[i]>='A'&& str[i]<='Z')
            str[i]+=32;
    cout<<str<<endl;
    
    // With Inbuilt Function
    string str1 = "Microsoft";
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout<<str1<<endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    cout<<str1<<endl;

    return 0;
}