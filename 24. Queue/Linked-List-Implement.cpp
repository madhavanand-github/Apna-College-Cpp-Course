#include<bits/stdc++.h>
using namespace std;

class node{

	public:
		int data;
		node* next;
	
	node(int value){
		data = value;
		next = NULL;
	}
};

class Queue{

	node* front;
	node* back;

	public:

	Queue(){
		front = NULL;
		back = NULL;
	}

	void enqueue(int x){

		// node n(x);
		// back = &n; front = &n;
		node* n = new node(x);
		if(front == NULL){
			front = n;
			back = n;
		} else {
			back->next = n;
			back = n;
		}
	}

	void dequeue(){

		if(empty()) cout << "Queue Underflow";
		else {
			node* toDelete = front;
			front = front->next;
			delete toDelete;
		}
	}

	int peek(){

		if(empty()) cout << "Queue Underflow";
		else return front->data;
	}

	bool empty(){
		return front == NULL;
	}

};

int main() {
	
	// Test Queue here
	
	return 0;
}