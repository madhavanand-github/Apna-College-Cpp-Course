#include<bits/stdc++.h>
using namespace std;

stack<int> revUsingStack(stack<int> st){

	stack<int> ans;
	while(!st.empty()) ans.push(st.top()), st.pop();
	return ans;
}

void basicReverse(stack<int> st){

	if(st.empty()) return;
	int temp = st.top();
	st.pop();
	basicReverse(st);
	cout << temp << endl;

}

void revUsingCallStack(stack<int> &st){

	if(st.empty()) return;
	int ele = st.top();
	st.pop();
	revUsingCallStack(st); // Think this is reversed.
	insertAtBottom(st, ele);
}

void insertAtBottom(stack<int> &st, int ele){
	
	if(st.empty()){
		st.push(ele);
	}

	int topele = st.top();
	st.pop();
	insertAtBottom(st, ele);
	st.push(topele);
}

int main() {
	
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	stack<int> temp = revUsingStack(st);
	while(!temp.empty()) {
		cout << temp.top() << " ";
		temp.pop();
	} cout << endl;

	basicReverse(st);
	
	return 0;
}