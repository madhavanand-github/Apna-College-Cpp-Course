#include<iostream>
#include<math.h>
using namespace std;

// 1. Instructor's Approach
int uniqueNum(int arr[], int n){
    int xorSum = 0;
    for (int i = 0; i < n; i++)
        xorSum = xorSum^arr[i];
    return xorSum;
}

int main(){

    int arr[7]={2,4,6,3,4,6,2};
    cout<<uniqueNum(arr,7)<<endl;

    // 2. Alternate Approach - Non-Optimized
    int temp[7]={0,0,0,0,0,0,0};
    int uniqueNum=0;
    for (int i = 0; i < 7; i++)
        temp[arr[i]]++;
    for (int i = 0; i < 7; i++)
        if(temp[i]==1){
            uniqueNum=i;
            break;
        }
    cout<<uniqueNum;
    
    // 3. Alternate Approach - Optimized
    int temp2[7]={0,0,0,0,0,0,0};
    for (int i = 0; i < 7; i++)
    {
        temp2[arr[i]]++;
        
    }
    
    
    return 0;
}