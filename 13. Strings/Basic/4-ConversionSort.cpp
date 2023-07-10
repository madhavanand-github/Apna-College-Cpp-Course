#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string str = "786";

    //String to Integer
    int x = stoi(str);
    cout<<stoi(str)+4<<endl;

    //Integer to String
    int y = 786;
    cout<<to_string(y)+"2"<<endl;

    //Sort
    string str1 = "dcba";
    sort(str1.begin(),str1.end());
    cout<<str1<<endl;
    
    return 0;
}