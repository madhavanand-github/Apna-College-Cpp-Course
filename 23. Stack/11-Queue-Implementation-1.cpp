#include<bits/stdc++.h>
using namespace std;

class Stack{

	queue<int> q1;
	queue<int> q2;

	public:

	void enqueue(int x){

	q2.push(x);

	while(!q1.empty()){
		q2.push(q1.front());
		q1.pop();
	}

	q1.swap(q2);
	}

	void dequeue(){

		if(q1.empty()) cout << "Underflow" << endl;
		else {
			q1.front();
			q1.pop();
		}
	}

	int size(){
		return q1.size();
	}

	int top(){
		if(q1.empty()) return -1;
		return q1.front();
	}
};

int main() {
	
	Stack s;

	// Empty Test
	cout << s.top() << endl;
	cout << s.size() << endl;
	s.dequeue();

	// Insertion Test
	s.enqueue(1);
	s.enqueue(2);
	s.enqueue(3);
	cout << s.size() << endl;
	cout << s.top() << endl;
	s.dequeue();
	cout << s.top() << endl;
	s.dequeue();
	cout << s.top() << endl;
	s.dequeue();
	
	return 0;
}