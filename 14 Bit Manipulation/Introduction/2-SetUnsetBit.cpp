#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int pos){
    return ( n | (1<<pos));
}

// Same as clear bit
int unsetBit(int n, int pos){
    return ( n & ~(1<<pos));
}

int main(){

    cout << setBit(5,1);
    cout << unsetBit(5,0);

    return 0;
}