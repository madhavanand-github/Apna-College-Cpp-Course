#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e5+2, MOD=1e9+7;

signed main(){

	// List input
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	// Helper
	int len = sqrtl(n) + 1;
	vector<int> p(len, MOD);
	for (int i = 0; i < n; i++){
		p[i/len] = min(p[i/len], v[i]);
	}
	
	// Driver
	int q; cin >> q;
	while (q--)
	{
		int l, r; 
		cin >> l >> r;
		int ans = MOD;
		for (int i = l; i <= r;)
		{
			if(l%len==0 && l+len-1 <= r){
				ans = min(ans, p[i/len]);
				i+=len;
			} else {
				ans = min(ans, v[i]);
				i++;
			}
		}
		cout << ans << endl;
	}

	
	return 0;
}