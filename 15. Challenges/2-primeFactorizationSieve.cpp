#include<iostream>
using namespace std;

void primeFactor(int n){
    
    int spf[100] = {0};

    // for (int i = 2; i <= n; i++) {
    //     if(!spf[i]) spf[i] = i;
    //     for (int j = i*i; j <= n; j+=i)
    //         if(!spf[j]) spf[j] = i;
    // }

    // Better Loop
    for (int i = 2; i <= n; i++) {
        if(!spf[i]) {
            spf[i] = i;
            for (int j = i*i; j <= n; j+=i)
            spf[j] = i;
        }
    }
    
    for (int i = 2; i <= n; i++)
    {
        cout << spf[i] << " ";
    }
    cout << endl;

    for (int i = 2; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    
    while(n != 1) {
        cout << spf[n] << " ";
        n = n/spf[n];
    }
    
}

int main(){

    // #1 Instructor's Approach
    primeFactor(42);
    
    return 0;
}