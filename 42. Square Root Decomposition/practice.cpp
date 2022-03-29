#include<bits/stdc++.h>
using namespace std;

int main(){

	// Array input
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	// Helper
	int len = sqrtl(n) + 1;
	vector<int> p(len);
	for (int i = 0; i < n; i++)
		p[i/len] += v[i];
	
	// Driver
	int t; cin >> t;
	while (t--)
	{
		int l, r; 
		cin >> l >> r;
		l--; r--;
		int sum = 0;
		for (int i = l; i <= r;)
		{
			if(l%len==0 && l+len-1 >= r){
				sum += p[l/len];
				i+=len;
			} else {
				sum+=v[i];
				i++;
			}
		}
		cout << sum << endl;
	}

	
	return 0;
}