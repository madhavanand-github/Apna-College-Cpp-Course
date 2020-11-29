#include<iostream>
using namespace std;

int lastocc(int arr[], int n, int i, int key){

    // Base Case
    if(i==n)
        return -1;
    
    int restArray = lastocc(arr, n, i+1, key);

    // This helps in transportation
    // In simple word if already got keep sending to top
    if(restArray!=-1)
        return restArray;

    // This complete works as if else statement
    if(arr[i]==key)
        return i;
    return -1;
}

int main(){

    int arr[]={4, 2, 1, 2, 5, 2, 7};
    cout<<lastocc(arr, 7, 0, 2);
    
    return 0;
}