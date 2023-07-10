#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "GitHub";

    //Find
    cout<<str.find("Hub")<<endl;

    //Insert
    cout<<str.insert(0,"Microsoft ")<<endl;
    
    return 0;
}