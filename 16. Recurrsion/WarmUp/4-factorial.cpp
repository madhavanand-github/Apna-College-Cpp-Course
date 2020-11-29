#include<iostream>
using namespace std;

// Question: Find the factorial of number n using recursion.

int factorial(int n){

    //Base Case 
    if(!n)
        return 1;
    
    //Recursion Case
    return n * factorial(n-1);
}

int main(){

    cout<<factorial(5)<<endl;
    return 0;
}