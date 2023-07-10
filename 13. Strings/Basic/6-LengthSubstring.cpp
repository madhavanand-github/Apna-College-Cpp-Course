#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "GitHub";

    //Length
    cout<<str.length()<<endl;
    
    //Size
    cout<<str.size()<<endl;

    //Subtring
    cout<<str.substr(0,5);
    
    return 0;
}