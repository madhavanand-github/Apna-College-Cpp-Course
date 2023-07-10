#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int N = 6;
	int arr[N] = {0, -9, 1, 3, -4, 5};
	bool help[5] = {0};

	for (int i = 0; i < N; i++)
		if(arr[i] >= 0) help[arr[i]] = 1;

	for (int i = 0; i < 5; i++)
		if(!help[i]) {cout << i << endl; break;}
	
	return 0;
} 