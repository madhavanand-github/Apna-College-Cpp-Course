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

void insertAtTail(node* &head, int key){

	node* n = new node(key);

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

	// General Case : Covers case empty too
	while(head != NULL){
		cout << head -> data << " -> ";
		head = head -> next;
	}
	cout << "NULL" << endl;
}

int len(node* &head){

	int count = 0;
	node* temp = head;

	while(temp != NULL){
		temp = temp -> next;
		count++;
	}

	return count;
}

void appendK(node* &head, int k){

	node* temp = head;
	int length = len(head);
	int count = length - k - 1; // Default count is 1

	while(count){
		temp = temp -> next;
		count--;
	}

	node* newTail = temp;
	node* newHead = temp -> next;
	newTail -> next = NULL;
	temp = newHead;

	while(temp -> next != NULL)
		temp = temp -> next;
	temp -> next = head;
	head = newHead;

}

void appendK2(node* &head, int k){

	node* newHead;
	node* newTail;
	node* tail = head;
	int l = len(head);
	int count = 1;
	k = k%l;
	while(tail -> next != NULL){
		if(count == l-k) newTail = tail;
		if(count == l-k+1) newHead = tail;
		tail = tail -> next;
		count++;
	}

	newTail -> next = NULL;
	tail -> next = head;
	head = newHead;

}

int main() {
	
	node* head = NULL;
	display(head);
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5); 
	insertAtTail(head, 6);
	display(head);
	appendK(head,3);
	appendK2(head,3);
	display(head);
	
	return 0;
}