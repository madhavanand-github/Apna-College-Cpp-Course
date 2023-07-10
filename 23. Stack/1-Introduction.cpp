#include<bits/stdc++.h>
using namespace std;

class Stack{

	// Raw Material
	int* arr;
	int top;
	int size;

	// Operations
	public:
	Stack(int n){
		arr = new int[n];
		top = -1;
		size = n;
	}

	void push(int val){
		if(top == size-1) cout << "Stack Overflow" << endl;
		else arr[++top] = val;
	}

	void pop(){
		if(empty()) cout << "Stack Underflow" << endl;
		else top--;
	}

	int Top(){
		if(empty()) return -1;
		else return arr[top];
	}

	bool empty(){
		return top == -1;
	}
};

int main() {
	
	Stack st(2);
	
	// Empty Test
	cout << st.empty() << endl;
	cout << st.Top() << endl;
	st.pop();
	
	// Push Test
	st.push(1);
	st.push(2);
	st.push(3);
	
	// Pop Test
	cout << st.Top() << endl;
	st.pop();
	cout << st.Top() << endl;
	st.pop();

	return 0;
}