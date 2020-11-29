#include<iostream>
using namespace std;

// Question: Print n natural numbers in increasing order
void inc(int n){

    //Base Case
    if(!n)
        return;
    
    //Recursive Case
    inc(n-1);
    cout<<n<<endl;
}

int main(){

    inc(5);
    
}

