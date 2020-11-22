#include<iostream>
using namespace std;

// Question: Find the sum of n natural numbers using recursion

int sum(int n){

    // Base Case
    if(n == 0)
        return 0;

    // Recursive Case
    return n + sum(n-1);
}

int main(){

    cout<<sum(5);
    return 0;
}