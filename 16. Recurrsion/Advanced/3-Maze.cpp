#include<iostream>
#include<string>
using namespace std;

int countMazePath(int n, int i, int j){

    if(i == n-1 && j == n-1) return 1;
    if(i >= n || j >= n) return 0;

    return countMazePath(n, i+1, j) + countMazePath(n, i, j+1);
}

int countPathMaze(int n, int i, int j){

    if(i==n-1 && j==n-1)
        return 1;

    if(i>=n || j>=n)
        return 0;
    
    return countPathMaze(n, i+1, j) + countPathMaze(n,i,j+1);

}


int main(){

    cout << countMazePath(3,0,0) << endl;


    return 0;
}