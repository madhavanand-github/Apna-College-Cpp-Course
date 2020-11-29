#include<iostream>
using namespace std;

bool isSortedArray(int arr[], int n){

    // Base Case
    if(n==1)
        return true;

    // Recursive Case
    return (arr[0]<arr[1] && isSortedArray(arr + 1, n-1));

}

int main(){

    int arr[]={1,2,39,4};
    cout<<isSortedArray(arr, 4);
    return 0;
}