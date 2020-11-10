#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 10;
    int *ptrToa=&a;
    int **ptrToptr=&ptrToa;

    cout<<*ptrToa<<endl;
    cout<<**ptrToptr<<endl;

    return 0;
}