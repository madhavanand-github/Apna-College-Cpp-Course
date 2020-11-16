#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int main(){

    cout<<getBit(5,2);

    return 0;
}