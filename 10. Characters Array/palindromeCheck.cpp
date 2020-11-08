#include<bits/stdc++.h>
using namespace std;

int main(){

    //Input char array size
    int n;
    cin>>n;

    //Input Word
    char word[n+1];
    cin>>word;

    //Program to Check Palindrome - #1 Brute Force Approach
    bool flag=false;
    int temp=n-1;
    for (int i = 0; i < n; i++){
        if(word[i]==word[temp])
            flag=true;
        else{
            flag=false;
            break;
        }
        temp--;
    }
        
    if(flag==true)
        cout<<"Result 1 :"<<"YES"<<endl;
    else
        cout<<"Result 1 :"<<"NO"<<endl;

    //Program to Check Palindrome - #2 Instructor Approach
    flag=true;
    for (int i = 0; i < n; i++)
        if(word[i]!=word[n-1-i]){
            flag=false;
            break;
        }
    
    if(flag==true)
        cout<<"Result 2 :"<<"YES"<<endl;
    else
        cout<<"Result 2 :"<<"NO"<<endl;
    
    //Program to Check Palindrome - #3 Highly Optimized Approach
    flag = true;
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