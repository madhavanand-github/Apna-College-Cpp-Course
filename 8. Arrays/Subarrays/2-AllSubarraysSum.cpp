#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int N = 4;
	int arr[N] = { -1, 4, 7, 2};
	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum = 0;
		for (int j = i; j < N; j++) {
			sum += arr[j];
			cout << sum << endl;
		}
	}
	
	return 0;
}