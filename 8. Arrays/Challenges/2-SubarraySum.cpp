#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int arr[3] = {1, 2, 3};

	for (int i = 0; i < 3; i++)
	{	
		int sum = 0;
		for (int j = i; j < 3; j++)
		{
			sum = sum + arr[j];
			cout << sum << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}