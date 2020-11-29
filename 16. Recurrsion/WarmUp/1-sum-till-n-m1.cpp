#include<iostream>
using namespace std;

// Question: Find the sum of n natural numbers

// Method 1: n + ... + 2 + 1
int sum1(int n){

    // Base Case
    if(n==1)
        return 1;

    // Recursive Case   
    return n + sum1(n-1);
}

// Method 2: 1 + 2 + ... + n
int sum2(int n, int i){

    // Base Case
    if(n==i)
        return n;
    
    // Recursive Case
    return i + sum2(n,i+1);
}

int main(){

    cout<<sum1(5)<<endl;
    cout<<sum2(5,1)<<endl;
    return 0;

}