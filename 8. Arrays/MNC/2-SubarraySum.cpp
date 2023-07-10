#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int N = 5;
	int S = 7;
	int A[5] = {1, 3, 3, 4, 5};
	int curSum = 0;

	// Two Pointer Approach
	int st = 0, en = 0;
	while(st <= en){

		if(curSum == S) break;

		if(curSum < S) {
			curSum += A[en];
			en++;
		}

		if(curSum > S){
			curSum -= A[st];
			st++;
		}

	}
	
	cout << st << " " << en-1 << endl;

	return 0;
}