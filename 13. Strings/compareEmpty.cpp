#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1 = "abc";
    string s2 = "abc";
    cout<<(s2.compare(s1))<<endl;
    //Compare
    if(!s2.compare(s1))
        cout<<"Both are same"<<endl;

    //Empty
    if(!s1.empty())
        cout<<"String are not empty";
    
    return 0;
}