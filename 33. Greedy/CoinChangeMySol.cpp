#include<iostream>
using namespace std;

int main(){
    
    int deno[10] = {1,2,5,10,20,50,100,200,500,2000};
    int x = 388;
    int max = 0, newx= 0;

    // Do this till my x = 0
    while (x)
    {
        // One Denomination Selection
        for (int i = 0; i < 10; i++)
        {
            if ((x-deno[i])>=0){
                max = deno[i];
                newx = x - max;
            } 
            else {
                x = newx;
                break;
            }
            
        }
        cout << max << " " << x << endl;
    }
    
    
    return 0;
}