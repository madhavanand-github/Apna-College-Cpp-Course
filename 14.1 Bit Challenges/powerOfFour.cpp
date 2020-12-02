#include<iostream>
using namespace std;

int main(){

    char ch = 'A';
    switch (ch){
    case 'A': cout<<"Chemistry"<<endl;
    case 'B':
    case 'C': cout<<"Maths"<<endl;
    default: cout<<"Physics"<<endl;
    }

    return 0;
}