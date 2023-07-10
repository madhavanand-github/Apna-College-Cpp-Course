#include<iostream>
using namespace std;

int main(){

    int arr[7]={1, 2, 3, 4, 1, 2, 3};

    int xorsum = 0;
    for (int i = 0; i < 7; i++)
        xorsum ^= arr[i];
    
    cout << xorsum << endl;
    
    return 0;
}