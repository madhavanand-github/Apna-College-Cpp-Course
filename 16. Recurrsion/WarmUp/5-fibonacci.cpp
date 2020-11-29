#include<iostream>
using namespace std;

// Question: Print the nth Fibonacci number where default values F(0)=0, F(1)=1

int fib(int n){

    //Base Case
    if(n<2)
        return n;
    
    //Recursive Case
    return fib(n-1)+fib(n-2);

}

int main(){

    cout<<fib(2);
    return 0;
    
}