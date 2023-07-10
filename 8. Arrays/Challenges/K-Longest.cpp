#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int T;
    cin >> T;
    
    for(int i = 1; i <= T; i++){
        int N;
        cin >> N;
        unsigned long long int A[N];
        for(int i = 0; i < N; i++)
            cin >> A[i];
            
        int cur = 2;
        int ans = 0;
        
        for(int i = 1; i < N-1 ; i++){
            
            if((A[i]-A[i-1]) == (A[i+1]-A[i]))
            cur += 1;
            else cur = 2;
            ans = max(ans, cur);
        }
        
        cout << "Case #" << i << ": " << ans << endl;
    }
}