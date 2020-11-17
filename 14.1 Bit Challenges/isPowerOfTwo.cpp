#include<iostream>
using namespace std;

int isPowerOf2(int n){
    return (n && !(n & n-1));
}

int getbit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int main(){

    // Method #1 - My Program
    int n;
    cin>>n;

    int count = 0;
    for (int i = 0; i < 16; i++)
        if(getbit(n,i)==1)
            count++;

    if(count>1 || count==0)
        cout<<"Nops"<<endl;
    else
        cout<<"Yes"<<endl;

    // Method #2 - Instructor's Method
    cout<<isPowerOf2(15)<<endl;

    return 0;
}