#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair<int,int> p1, pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){

    int arr[]={10,16,7,14,5,3,12,9};

    // Creating the Vector of Pairs
    vector <pair<int,int>> v;
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
        v.push_back(make_pair(arr[i],i));
    
    // Sorting the Vector of Pairs
    sort(v.begin(),v.end(),myCompare);

    // Setting up array
    for(int i=0; i<v.size();i++)
        arr[v[i].second]=i;
    
    // Print the elements in array
    for (int i = 0; i < v.size(); i++)
        cout<<arr[i]<<" ";
    

}