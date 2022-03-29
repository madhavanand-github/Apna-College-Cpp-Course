#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    // Input the size of array
    int n;
    cin >> n;
    
    // Input the values
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
        cin >> temp[i];

    // Sorting in descending order
    sort(temp.begin(), temp.end(), greater<int>());

    // For max summation
    int ansMax = 0;
    for (int i = 0; i < n/2; i++)
        ansMax += temp[i] - temp[n-1-i];

    cout << abs(ansMax) << endl;

    // For min summation - Max minus next max
    int ansMin = 0;
    for (int i = 0; i < n; i+=2)
        ansMin += temp[i] - temp[i+1];

    cout << abs(ansMin);


    
    return 0;
}