#include <iostream> // for cin & cout
#include <vector> // for vectors

using namespace std; // to avoid writing std:: again & again

#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int main(){

    // Input number of nodes and edges
    int n, e;
    cin >> n >> e;

    // Dynamic 2D array
    vector<vector<int> adjm(n+1, vector<int>(n+1,0));

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }
    
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
            cout << adjm[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}