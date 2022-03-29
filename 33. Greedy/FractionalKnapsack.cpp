#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define pii pair<int,int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

bool compare(pii a, pii b){
    double v1 = (double) a.ff / a.ss;
    double v2 = (double) b.ff / b.ss;
    return v1 > v2;
}

int main(){

    // Input number of items
    int n;
    cin >> n;

    // Input the Profit & Weight
    vii a(n);
    rep(i,0,n)
        cin >> a[i].ff >> a[i].ss;

    // Input the weight of sack
    int w;
    cin >> w;

    // Sorting it via profit/weight
    sort(a.begin(), a.end(), compare);

    int ans = 0;
    rep(i,0,n){

        if (w >= a[i].ss)
        {
            ans += a[i].ff;
            w -= a[i].ss;
            continue;
        }
        
        double vw = (double) a[i].ff/a[i].ss;
        ans += vw*w;
        w = 0;
        break;
    }
    cout << ans << endl;

    return 0;
}