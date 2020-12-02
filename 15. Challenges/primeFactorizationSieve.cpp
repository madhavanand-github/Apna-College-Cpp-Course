#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    int arr[100]={0};
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    for (int i = 2; i <= num; i++)
        if(arr[i]==0)
            for (int j = i*i; j <= num; j+=2)
                arr[i]=i;

    while (num!=1)
    {
        cout<<arr[num]<<" ";
        num = num/arr[num];
    }
          
    
    

    return 0;
}