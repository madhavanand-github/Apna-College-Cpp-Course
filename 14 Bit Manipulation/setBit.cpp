#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int pos){
    return ( n | (1<<pos));
}

int main(){

    cout<<setBit(5,1);

    return 0;
}