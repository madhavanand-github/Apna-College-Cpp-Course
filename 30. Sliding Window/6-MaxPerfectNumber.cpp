#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n){

	if(n == 1) return false;

	int sum = 1;

	for(int i = 2; i*i < n; i++){

		if(n % i == 0){
			if(i*i == n) sum += i;
			else sum += i + n/i;
		}
	}

	if(sum == n) return true;
	return false;

}

int maxPerfect(vector<int> A, int k){

	int n = A.size();
	int wsum = 0;
	int mx = INT_MIN;

	for(int i = 0; i < n; i++)
		A[i] = isPerfect(A[i]);
	
	for (int i = 0; i < k; i++)
		wsum += A[i];
	
	mx = max(mx, wsum);
	for(int i = k; i < n; i++){
		wsum += A[i] - A[i-k];
		mx = max(mx, wsum);
	}
	
	return mx;
}

int main() {
	
	vector<int> arr = {28, 2, 3, 6, 496, 99, 8128, 24};
	cout << maxPerfect(arr, 4) << endl;
	
	return 0;
}