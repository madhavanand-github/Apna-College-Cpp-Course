#include<bits/stdc++.h>
using namespace std;

int main(){

    //Input char array size
    int n;
    cin>>n;

    //Input String
    char word[n+1];
    cin>>word;
    
    //Program to Check Palindrome - #3 Highly Optimized Approach
    int flag = true;
    for (int i = 0; i < n/2; i++)
        if(word[i]!=word[n-1-i]){
            flag=false;
            break;
        }

    if(flag==true)
        cout<<"Result 3 :"<<"YES"<<endl;
    else
        cout<<"Result 3 :"<<"NO"<<endl;     
    
    return 0;
}