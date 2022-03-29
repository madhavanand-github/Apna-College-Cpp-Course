// Adding Header Files
#include <iostream> // for cout & cin
#include <algorithm> // for sort
#include <vector> // for dynamic array
#include <queue> // for priority queue

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
        
    // Creating Priority Queue Minheap
    // Datatype, container, type
    priority_queue<int, vector<int>, greater<int>> minheap;
    rep(i,0,n)
        minheap.push(a[i]);
    
    int ans = 0;
    
    while(minheap.size() > 1){
        int e1 = minheap.top();
        minheap.pop();
        int e2 = minheap.top();
        minheap.pop();
        
        ans += e1 + e2;
        minheap.push(e1 + e2);
    }
    
    cout << ans;    
    return 0;
}