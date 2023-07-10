#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;

    // Input
    cin>>str; cin.ignore();

    // Output
    cout<<str<<endl;

    // Declare string with default
    string str1(5,'n');
    
    //Output str1
    cout<<str1<<endl;

    // Input Multi-line String
    string str3;
    getline(cin, str3);
    cout<<str3<<endl;

    // String Functions
    string s1="fam";
    string s2="ily";

    // Append
    s1.append(s2);
    cout<<s1<<endl;

    // Concatenate
    string s3="fam";
    cout<<s3+s2<<endl;

    

    return 0;
}