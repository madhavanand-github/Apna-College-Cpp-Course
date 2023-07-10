#include<bits/stdc++.h>
using namespace std;

class  Queue{

	stack<int> st1;
	stack<int> st2;
	
	public:

	bool empty(){
		return st1.empty() && st2.empty();
	}

	void enqueue(int x){
		st1.push(x);
	}

	void dequeue(){

		if(empty()) return;

		if(st2.empty())
		while(!st1.empty()){
			st2.push(st1.top());
			st1.pop();
		}
		st2.pop();
	}

	int top(){

		if(empty()) return -1;

		if(st2.empty())
		while(!st1.empty()){
			st2.push(st1.top());
			st1.pop();
		}
		return st2.top();
	}

};

int main() {
	
	// Testing the code
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	cout << q.top() << endl;
	q.dequeue();
	q.enqueue(3);
	cout << q.top() << endl;
	q.dequeue();
	cout << q.top() << endl;
	q.dequeue();
	
	return 0;
}