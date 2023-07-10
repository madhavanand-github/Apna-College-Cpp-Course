#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >>T;
    
    for(int i = 1; i <= T; i++){
        
        int N;
        cin >> N;
        int V[N];
        for(int i=0; i < N; i++)
            cin >> V[i];
        
        int ans = 0;
	int maxi = V[0];
        
        for(int i=0; i < N; i++){

            if((i==0 && V[i] > V[i+1]) || (i==N-1 && V[i] > maxi) )
                ans++;
            else if(V[i] > maxi && V[i] > V[i+1])
                ans++;
            maxi = max(maxi, V[i]);

        }
        
	if(N==1) ans = 1;
        cout << "Case #" << i << ": " << ans << endl;

    }
    return 0;
}	