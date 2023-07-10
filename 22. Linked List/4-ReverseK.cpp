#include<bits/stdc++.h>
using namespace std;

class node{

	public:
		int data;
		node* next;

	node(int val){
		data = val;
		next = NULL;
	}

};

void insertAtTail(node* &head, int val){

	node* n = new node(val);

	if(head == NULL){
		head = n;
		return;
	} 
	
	node* temp = head;
	while(temp -> next != NULL){
		temp = temp -> next;
	}
	temp -> next = n;

}

void display(node* head){

	node* temp = head;

	if(temp == NULL){
		cout << "Empty" << endl;
		return;
	}

	while(temp != NULL){
		cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	cout << "NULL" << endl;
}

node* reverseK(node* &head, int k){

	node* pre = NULL;
	node* cur = head;
	node* nxt;
	
	int count = 0;
	while(cur != NULL && count < k){
		nxt = cur -> next;
		cur -> next = pre;
		pre = cur;
		cur = nxt;
		count++;
	}

	if(nxt != NULL)
	head -> next = reverseK(nxt, k);

	return pre;
}

int main() {
	
	node* head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	display(head);
	head = reverseK(head, 3);
	display(head);
	
	return 0;
}