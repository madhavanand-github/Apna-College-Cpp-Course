#include<iostream>
using namespace std;

int setBit_1(int n, int pos){
    return ( n | (1<<pos));
}

int setBit_0(int n, int pos){
    return ( n & ~(1<<pos));
}

int updateBit_1(int n, int pos, int value){
    if(value==0)
        return setBit_0(n,pos);
    else
        return setBit_1(n,pos);

}

int updateBit_2(int n, int pos, int value){
    int mask =~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main(){

    cout<<updateBit_2(5,1,1);
    cout<<updateBit_1(5,1,1);
    return 0;
}