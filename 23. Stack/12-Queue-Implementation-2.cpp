#include<bits/stdc++.h>
using namespace std;

class Stack{

	queue<int> q1;
	queue<int> q2;

	public:

	void enqueue(int val){
		q1.push(val);
	}

	void dequeue(){
		if(!q1.empty()) {
			while(q1.size() != 1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
			q1.swap(q2);
		}
		
	}

	int size(){
		return q1.size();
	}

	int top(){
		if(!q1.empty()) {
			while(q1.size() != 1){
				q2.push(q1.front());
				q1.pop();
			}
			int ans = q1.front();
			q2.push(ans);
			q1.pop();
			q1.swap(q2);
			return ans;
		}
		else return -1;
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