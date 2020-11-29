#include<iostream>
using namespace std;

// Question: Find n exponent p using, where p is whole numbers

int nRaisep(int n, int p){
    
    // Base Case
    if(!p)
        return 1;

    //Recursive Case
    return (n * nRaisep(n,p-1));

}

int main(){

    cout<<nRaisep(2,0);
    return 0;
}