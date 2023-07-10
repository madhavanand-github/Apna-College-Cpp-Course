#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int A[8] = {2, 2, 2, 1, 1, 4, 3, 4};
	map<int, int> mp;
	unordered_map<int, int> up;

	for(auto num : A){
		mp[num]++;
		up[num]++;
	}
		
	map<int, int> :: iterator it;
	for(it = mp.begin(); it!= mp.end(); it++)
		cout << it -> first << " " << it -> second << endl;
	
	cout << endl;
	
	unordered_map<int, int> :: iterator itu;
	for(itu = up.begin(); itu!= up.end(); itu++)
		cout << itu -> first << " " << itu -> second << endl;
	
	return 0;
}