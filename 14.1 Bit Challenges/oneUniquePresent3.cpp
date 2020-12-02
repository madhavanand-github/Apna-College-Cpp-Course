#include<iostream>
using namespace std;

int main(){

    int arr[]={1,3,2,3,4,2,1,1,3,2};

    // 1. My Approach - Non Optimized
    int temp[]={0,0,0,0,0};
    int ans=0;
    for (int i = 0; i < 10; i++)
        temp[arr[i]]++;
    for (int i = 0; i < 5 ; i++)
        if(temp[i]==1){
            ans=i;
            break;
        }
    cout<<ans<<endl;

    // 2. My Approach - Optimized
    int temp2[] = {0,0,0,0,0};
    int ans2=0;
    for (int i = 0; i < 10; i++)
    {
        temp2[arr[i]]++;
        //We need not to bother repition 3rd time.
        if(temp2[arr[i]]==1)
            ans2+=arr[i];
        if(temp2[arr[i]]==2)
            ans2-=arr[i];
    }
    cout<<ans2<<endl;
    
    // 3.  Instructor's Method
    int temp3[3]={0,0,0};
    for (int i = 0; i < 10; i++)
    {
        /* code */
    }
    
    return 0;
}