#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    cout<<"Address of Array"<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl<<endl;

    cout<<"Value of first element"<<endl;
    cout<<*arr<<endl;
    cout<<*&arr[0]<<endl<<endl;

    cout<<"Printing All Elements #1"<<endl;
    int *ptr=arr;
    for (int i = 0; i < 5; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    
    cout<<endl;

    cout<<"Printing All Elements #2"<<endl;
    for (int i = 0; i < 5; i++)
        cout<<*(arr+i)<<endl;
    
    return 0;
}