#include<iostream>
using namespace std;

void replacePi(string str){

    // Base Case
    if(!str.length())
        return;

    // Recursive Case
    if(str[0]=='p' && str[1]=='i'){
        cout<<"3.14";
        replacePi(str.substr(2));
    }
    else
    {
        cout<<str[0];
        replacePi(str.substr(1));
    }
    

}

int main(){
    
    replacePi("IamPi pi");
    return 0;
}