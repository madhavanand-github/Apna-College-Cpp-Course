#include<bits/stdc++.h>
using namespace std;

// Can you go at these co-ordinates
bool canGo(int** arr, int x, int y, int n){

	if(x<n && y<n && arr[x][y]==1)
		return true;

	return false;
}

// 
bool ratinMaze(int** arr, int x, int y, int n, int** sol){

	// Base - Reached Goal
	if(x==n-1 && y==n-1){
		sol[x][y] = 1;
		return true;
	}

	// 
	if(canGo(arr, x, y, n)){
		sol[x][y] = 1;
		if(ratinMaze(arr, x+1, y, n, sol)) return true;
		if(ratinMaze(arr, x, y+1, n, sol)) return true;
		sol[x][y] = 0; // backtrack
		return false;
	}

	return false;
}

int main() {
	
	
	
	return 0;
}