#include<iostream>
using namespace std;

// Question: Print n natural numbers in decreasing order
void dec(int n){

    // Base Case
    if(n==0)
        return;
    
    // Recursive Case
    cout<<n<<endl;
    dec(n-1);

}

// Question: Print n natural numbers in increasing order
void inc(int n){

    //Base Case
    if(n==0)
        return;
    
    //Recursive Case
    inc(n-1);
    cout<<n<<endl;
}

int main(){

    dec(5);
    cout<<endl;
    inc(5);
}

