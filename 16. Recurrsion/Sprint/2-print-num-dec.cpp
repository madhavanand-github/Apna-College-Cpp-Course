#include<iostream>
using namespace std;

// Question: Print n natural numbers in decreasing order
void dec(int n){

    // Base Case
    if(!n)
        return;
    
    // Recursive Case
    cout<<n<<endl;
    dec(n-1);

}

int main(){

    dec(5);

}

