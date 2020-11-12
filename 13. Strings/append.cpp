#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1="fam";
    string s2="ily";

    //Method #1
    s1.append(s2);
    cout<<s1<<endl;

    //Method #2
    string s3="fam";
    cout<<s3+s2<<endl;

    //Method #3
    string final;
    final = s3 + s2;
    cout<<final<<endl;
    
    return 0;
}