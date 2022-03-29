#include<bits/stdc++.h>
using namespace std;

int main(){

	// Array input
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	// Pre-Computation Array
	int len = sqrtl(n) + 1;
	vector<int> p(len);

	// Filling the values
	for (int i = 0; i < n; i++)
		p[i/len] += v[i];
	
	// Queries Input & Calculation
	int q; cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		l--; r--;
		int sum = 0;
		for (int i = l; i <= r;)
		{
			if(i%len == 0 && i+len-1 <= r){
				sum+=p[i/len];
				i += len;
			}
			else{
				sum+=v[i];
				i++;
			}
		}
		cout << sum << endl;
		
	}
	
	

	return 0;
}