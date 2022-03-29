#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)

signed main(){
    
    // Number of Denominations
    int n;
    cin >> n;

    // Contianer to Hold Denominations
    vi a(n);
    
    // Storing the denominations in container
    rep(i,0,n)
        cin >> a[i];

    // Amount for which I need denominations
    int x;
    cin >> x;

    // Sorting
    sort(a.begin(), a.end(), greater<int>()); // greater<int>() to sort in  decreasing order
    int ans = 0;

    // Pickup the max you can at each denomination 
    for (int i = 0; i < n; i++)
    {
        // These two steps are brilliant, think on these
        ans += x/a[i]; 
        x -= x/a[i] * a[i];
    }
    
    cout << ans;
    return 0;
}