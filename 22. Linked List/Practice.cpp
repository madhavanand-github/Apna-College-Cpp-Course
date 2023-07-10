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

void insertAtHead(node* &head, int val){

	node* n = new node(val);
	n -> next = head;
	head = n;

}

bool search(node* &head, int key){

	node* temp = head;
	while(temp != NULL){
		if(temp -> data == key) return true;
		temp = temp -> next; 
	}
	
}

void deletion(node* &head, int key){

	if(head == NULL){
		cout << "EMPTY" << endl;
		return;
	}

	node* temp = head;

	while(temp -> next != NULL){

		if(temp -> next -> data == key){
			node* todelete = temp -> next;
			temp -> next = temp -> next -> next;
			delete todelete;
			return;
		}
	}

}

void revItr(node* &head){

	node* pre = NULL;
	node* cur = head;
	node* nxt;

	while (cur != NULL)
	{
		nxt = cur -> next;
		cur -> next = pre;
		pre = cur;
		cur = nxt;
	}
	
	head = pre;
}

node* revRec(node* &head){
	
	// Base case
	if(head == NULL || head -> next == NULL)
	return head;

	node* newHead = revRec(head -> next);
	head -> next -> next = head;
	head -> next = NULL;

	return newHead;
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
	revItr(head);
	display(head);
	display(revRec(head));

	return 0;
}