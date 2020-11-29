#include<iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char help){

    // Base Case
    if(!n)
        return;
    
    // Recursive Case
    towerOfHanoi(n-1, src, help, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1, help, dest, src);

}

int main(){
    
    towerOfHanoi(4,'A', 'C', 'B');
    return 0;
}