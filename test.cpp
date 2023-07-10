// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int count_of_vowels(char* input1){
    int ans = 0;
    int i = 0;
    while((input1[i])!= '\0'){
         char ch = input1[i];
        if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ) ans++;
        i++;
    }
    return ans;
}

// Driver code
int main()
{
	char arr[] = "hello";
	cout << count_of_vowels(arr);

	return 0;
}
