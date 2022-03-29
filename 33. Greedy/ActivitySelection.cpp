#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{

    // Input the number of activities
    int n;
    cin >> n;

    // Input of start and end time of activities
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end}); // shortcut to insert two at a time
    }

    // Sorting according to the end time
    // Comparator used here is a lambda function or function defined inside the comparator parameter
    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b) {
        return a[1] < b[1];
    });

    int take = 1;
    int end = v[0][1];
    for (int i = 1; i < n; i++)
    {
        if (v[i][0] >= end)
        {
            take++;
            end = v[i][1];
        }
    }

    cout << take;
    return 0;
}