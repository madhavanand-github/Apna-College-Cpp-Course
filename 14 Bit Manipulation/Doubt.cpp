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

int main(){

    cout<<updateBit_1(5,1,0);

    return 0;
}