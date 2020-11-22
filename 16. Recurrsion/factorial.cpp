#include<iostream>
using namespace std;

// Question: Find the factorial of number n using recursion.

int fact(int n){
    
    // Base Case
    if(n==0 || n==1)
        return 1;
    
    // Recursive Case
    return n * fact(n-1);
}

int main(){

    cout<<fact(5);
    return 0;
}