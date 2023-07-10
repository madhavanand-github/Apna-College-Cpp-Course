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

// 2 Pointer Approach

void reverse(node* &head){

	node* pre = NULL;
	node* cur = head;
	node* nxt;

	while(cur != NULL){
		nxt = cur -> next;
		cur -> next = pre;
		pre = cur;
		cur =  nxt;
	}
	
	head = pre;

}

// Recursive Reverse
node* reverseRecursive(node* &head){

	if(head == NULL || head -> next == NULL) return head;

	node* newhead = reverseRecursive(head->next);
	head -> next -> next = head;
	head -> next = NULL;

	return newhead;

}

int main() {
	
	node* head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	display(head);
	reverse(head);
	display(reverseRecursive(head));
	
	return 0;
}