#include<bits/stdc++.h>
using namespace std;

// Position starts from 0 moves right to left
bool getBit(int n, int pos){
    return (n & (1<<pos));
}

int main(){
    
    // 5 = 0101
    cout<<getBit(5,1);

    return 0;
}