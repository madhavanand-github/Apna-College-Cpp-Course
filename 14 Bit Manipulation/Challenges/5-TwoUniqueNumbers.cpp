#include<iostream>
using namespace std;

int main(){

    int A[8] = { 2, 4, 6, 7, 4, 5, 6, 2};

    int xorsum = 0;

    for (int i = 0; i < 8; i++)
        xorsum ^= A[i];
        
    int index = 0;
    int temp = xorsum;

    while(!(temp & 1)) {
        temp >>= 1;
        index++;
    }

    int num = 0;
    for (int i = 0; i < 8; i++) {
        if(A[i] & 1<<index) num ^= A[i];
    }
    
    cout << num << endl;
    cout << (xorsum ^ num) << endl;
    
    return 0;
}