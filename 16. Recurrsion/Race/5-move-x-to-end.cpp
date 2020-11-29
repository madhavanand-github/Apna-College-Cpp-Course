#include<iostream>
#include<string>
using namespace std;

string moveX(string s){

    if(!s.length())
        return "";
    
    char ch=s[0];
    string ans  = moveX(s.substr(1));

    if(ch=='x')
        return ans+ch;
    return ch+ans;

}

int main(){

    cout<<moveX("asdfxxaxxsdfxx");
    return 0;

}