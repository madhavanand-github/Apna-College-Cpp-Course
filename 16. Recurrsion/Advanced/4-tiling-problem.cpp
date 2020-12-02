#include<iostream>
#include<string>
using namespace std;

int tilingWays(int n){

    if(!n)
        return 0;
    
    if(n==1)
        return 1;
    
    return tilingWays(n-1) + tilingWays(n-2);

}