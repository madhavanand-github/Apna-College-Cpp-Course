#include<iostream>
using namespace std;

int numberOfOnes(int n){
    int count=0;
    while (n)
        n = (n & n-1), count++;
    return count;
}

// Super consise
int Ones(int n){

    int count = n & 1;

    while(n>>=1)
        count += n & 1;

    return count;
}

int main(){

    cout<<numberOfOnes(15);
    cout<<Ones(15);
    return 0;
}