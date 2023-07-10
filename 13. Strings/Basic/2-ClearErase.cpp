#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1 = "GitHub";

    //Clear
    str1.clear();
    cout<<str1<<endl;

    //Erase
    string str2 = "Ninco poop";
    str2.erase(0,6);
    cout<<str2<<endl;

    
    return 0;
}