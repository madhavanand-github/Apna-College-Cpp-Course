#include<iostream>
#include<string>
using namespace std;

void reverseString(string str){

    // Base Case
    if(!str.length())
        return;

    // Recursive Case
    reverseString(str.substr(1));
    cout<<str[0];
}

int main(){

    reverseString("Madhav");
    return 0;

}