#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){

    int n=2, m=2;
    // 2D Vector : Declared a vector of size nxm.
    vector<vector<int>> grid(n,vector<int>(m,-1));

    // Sum of Vector Elements : #include<numeric>
    vector<int> v(4,50);
    int sum = accumulate(v.begin(),v.end(), 0);
    cout<<sum<<endl;

    // Max and Min Element
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    int mx = *max_element(v1.begin(),v1.end());
    cout<<mx<<endl;
    int mn = *min_element(v1.begin(), v1.end());
    cout<<mn<<endl;

    // Prefix Sum Vector
    vector<int> v2 = {10, 20, 30};
    partial_sum(v2.begin(), v2.end(), v2.begin());
    for(auto element:v2)
        cout<<element<<" ";
    cout<<endl;

    
    return 0;
}