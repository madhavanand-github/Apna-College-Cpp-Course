#include<bits/stdc++.h>
using namespace std;

class Queue{

	int* arr;
	int front;
	int back;
	int size;

	public:

	Queue(int n){
		arr = new int[n];
		size = n;
		front = -1;
		back = -1;
	}

	void enqueue(int n){

		if(back<size) arr[++back] = n;
		else cout << "Queue Overflow";

		if(front == -1) ++front;
	}

	void dequeue(){

		if(empty()) cout << "Empty Queue";
		else ++front;
	}

	int peek(){

		if(empty()) return -1;
		else return arr[front];
	}

	bool empty(){
		return (front == -1 || front > back);
	}

};

int main() {
	
	// Test this code here
	
	return 0;
}