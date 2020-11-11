#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //memory allocated in stack
    int a = 10; 
    //pointer allocated in stack but memory allocated in heap
    int *p = new int(); 
    //This is how we can access
    *p = 10;
    //deallocate memory
    delete(p); 
    // Pointer P turns into a dangling pointer
    // Now we can do two things either point it to a new memory location or Null that

    // #1 allocating an array to same pointer
    p = new int[4];
    // deallocating an array
    delete[]p;
    
    // #2 No Longer want to use
    p=NULL;

    return 0;

}