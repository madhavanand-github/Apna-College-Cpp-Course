#include<iostream>
using namespace std;

// Question: Print the nth Fibonacci number where default values F(0)=0, F(1)=1

int fib(int n){

    //Base Case
    if(n==0 || n==1)
        return n;
    
    //Recursive Case
    return fib(n-1)+fib(n-2);

}

int main(){
    cout<<fib(5);
    return 0;
}