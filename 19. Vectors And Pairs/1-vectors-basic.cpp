#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // Declaration #1
    vector<int> v;

    // Insertion : Demonstrates Dynamic Nature of Vector
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);

    // Deletion : Demonstrates Dynamic Nature of Vector
    v.pop_back();

    // Declaration #2: Default Values
    vector<int> v2(3,50);

    /// Declaration #3: Default Values
    vector<int> v3(3,100);

    // Accessing #1 for-loop
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;

    // Accessing #2 iterator
    vector<int>::iterator it;
    for ( it = v2.begin(); it!=v2.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // Accesign #3 auto - easy-way
    for(auto element:v3)
        cout<<element<<" ";
    cout<<endl;

    // Swap Function
    swap(v2, v3);
    v2.swap(v3);

    for(auto element:v2)
        cout<<element<<" ";
    cout<<endl;

    for(auto element:v3)
        cout<<element<<" ";
    cout<<endl;

    // Sort
    sort(v.begin(), v.end());

    for(auto element:v)
        cout<<element<<" ";

    return 0;
}
