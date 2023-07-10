#include<bits/stdc++.h>
using namespace std;

class node{

	public:
		int data;
		node* next;
		node* prev;
	
	node(int val){

		data = val;
		next = prev = NULL;
	}
};

void insertAtTail(node* &head, int val){

	node* n = new node(val);
	node* temp = head;

	if(head == NULL) {
		head = n;
		return;
	}

	while(temp -> next != NULL){
		temp = temp -> next;
	}

	temp -> next = n;
	n -> prev = temp;
	
}

void insertAtHead(node* &head, int val){

	node* n = new node(val);

	if(head == NULL) {
		head = n;
		return;
	}

	n -> next = head;
	head -> prev = n;
	head = n;

}

void display(node* &head){

	node* temp = head;
	while(temp != NULL){
		cout << temp -> data  << " -> ";
		temp = temp -> next;
	}

	cout << "NULL" << endl;
}

bool search(node* &head, int key){

	node* temp = head;
	while (temp != NULL){
		if(temp -> data == key) return true;
		temp = temp -> next;
	}
		
	return false;
}

void deletion(node* &head, int key){

	node* temp = head;

	if(head -> data == key){
		node* todelete = head;
		head = head -> next;
		head -> prev = NULL;
		delete todelete;
		return;
	}

	while (temp -> data != key) 
		temp = temp -> next;
	
	node* todelete = temp;
	temp -> prev -> next = temp -> next;

	if(temp -> next != NULL)
		temp -> next -> prev = temp -> prev;

	delete todelete;
	
}

// Assuming not empty
void deletionAtHead(node* &head){

	node* todelete = head;
	head = head -> next;
	head -> prev = NULL;
	delete todelete;
}

int main() {
	
	node* head = NULL;
	insertAtHead(head,10);
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	deletion(head, 10);
	deletionAtHead(head);
	display(head);

	return 0;
}