#include<iostream>
#include<string>
using namespace std;

int main(){

    //#1 Declare a string
    string str;

    //Input a string
    cin>>str;

    //Output a string
    cout<<str<<endl;

    //#2 Declare a string
    string str1(5,'n');
    
    //Output str1
    cout<<str1<<endl;

    //#3 Declare a string
    string str2 = "ApnaCollege";
    cout<<str2<<endl;
    cin.ignore();

    //#4 Input Multi-line String
    string str3;
    getline(cin, str3);
    cout<<str3<<endl;

    return 0;
}