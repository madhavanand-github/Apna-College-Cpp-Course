#include<bits/stdc++.h>
using namespace std;

int main(){

    //Declare and Initialize variable and pointer
    int a = 10;
    int* pointer; // Altenatively int *pointer;
    pointer = &a;

    cout<<&a<<endl; // Prints the address of variable a
    cout<<pointer<<endl; // Prints the address of variable a stored in pointer
    cout<<*pointer<<endl; // Prints the value of a via pointer

    return 0;
}