// Adding Header Files
#include <iostream> // for cout & cin
#include <algorithm> // for sort
#include <vector> // for dynamic array

// to avoid repeatedly writing std::cout, std::cin
using namespace std; 

// To be smart a bit
#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<n; i++)

int main(){
    
    // Input number of files
    int n;
    cin >> n;
    
    // Input the computation times
    vi a(n);
    rep(i,0,n)
        cin >> a[i];
        
    // Sorting the list
    sort(a.begin(), a.end());
    
    // Calculating the computation time
    int totalCost = 0;
    rep(i,0,n)
        totalCost += a[i];
    
    cout << totalCost;    
    return 0;
}