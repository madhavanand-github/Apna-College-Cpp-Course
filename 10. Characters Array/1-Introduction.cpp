#include<bits/stdc++.h>
using namespace std;

int main(){

    char fruitName[20]="Mango";

    // "\0" null character is evaluated to false
    int i = 0;
    while(fruitName[i]){
        cout<<fruitName[i];
        i++;
    }
        
    // Input in array
    char name[100];
    cin >> name;
    cout << name;

    return 0;
}