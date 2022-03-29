#include <iostream> // for cin & cout
#include <algorithm> // for sort
#include <vector> // for vector

using namespace std; // to avoid writing std::cin & std::cout

int main(){

    // Input the size of array;
    int n;
    cin >> n;

    // Input the values
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;

    sort(a.begin(), a.end());

    // The main point
    long long mn = 0, mx = 0;
    for (int i = 0; i < n/2; i++)
    {
        mx += abs(a[i+n/2] - a[i]);
        mn -= abs(a[2*i+1] - a[2*i]);
    }
    
    cout << mx << " " << mn;

    return 0;
}