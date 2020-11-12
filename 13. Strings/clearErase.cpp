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
    str2.erase(3,3);
    cout<<str2<<endl;

    
    return 0;
}