#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Declaration
    pair <int,int> p;
    pair <int,char> p1;
    p1.first = 3;
    p1.second = 'A';

    int arr[]={10,20};
    // Pair Vector Creation
    vector <pair<int,int>> v;
    for (int i = 0; i < 2; i++)
    {
        pair<int,int> p2;
        p2.first=arr[i];
        p2.second=i;
        v.push_back(p2);
    }

    

    return 0;
}