#include<bits/stdc++.h>
using namespace std;

int setBit_1(int n, int pos){
    return ( n | (1<<pos));
}

int setBit_0(int n, int pos){
    return ( n & ~(1<<pos));
}

int main(){

    cout<<setBit_1(5,1);
    cout<<setBit_0(5,0);
    return 0;
}