#include<iostream>
using namespace std;

int firstooc(int arr[], int n, int i, int key){

    // Base Case
    if(i==n)
        return -1;

    // Recursive Case
    if(arr[i]==key)
        return i;

    return firstooc(arr, n, i+1, key);
}

int main(){

    int arr[]={4, 2, 1, 2, 5, 2, 7};
    cout<<firstooc(arr, 7, 0, 2);
    
    return 0;
}