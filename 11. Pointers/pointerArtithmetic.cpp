#include<bits/stdc++.h>
using namespace std;

int main(){

    // Example #1
    int a = 10;
    int* pointer = &a;

    cout<<pointer<<endl;

    ++pointer;
    cout<<pointer<<endl;

    // Example #2
    char c = 'M';
    char* charPTR = &c;

    cout<<charPTR<<endl;

    ++charPTR;
    cout<<charPTR<<endl;


    return 0;
}