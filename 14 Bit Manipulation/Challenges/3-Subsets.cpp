#include<iostream>
using namespace std;

void subsets(int arr[],int n){
    for (int i = 0; i < (1<<n); i++){
    cout<<"{ ";
        for (int j = 0; j < n; j++)
            if(i & (1<<j))
                cout<<arr[j]<<", ";
    cout<<"}";
    cout<<endl; 
    }   
}

int main(){

    int arr[3] = {1,2,3};
    subsets(arr,3);

    return 0;
}