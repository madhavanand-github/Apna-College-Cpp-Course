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

void display(node* &head){

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

// Deletion at head
void deletionAtHead(node* &head){

	node* todelete = head;
	head = head -> next;
	delete todelete;
}

// Single Pointer Solution
void deletion(node* &head, int val){

	if(head == NULL){
		cout << "Empty" << endl;
		return;
	}

	if(head -> data == val){
		deletionAtHead(head);
		return;
	}

	node* temp = head;
	while (temp -> next -> data != val)
		temp = temp -> next;

	node* todelete = temp -> next;
	temp -> next = temp -> next -> next;
	delete todelete;

}

int main() {
	
	node* head = NULL;
	deletion(head,1); // Empty Case
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	display(head);
	
	deletion(head,1); // Deletion at head
	display(head);

	deletion(head,5); // Deletion at tail
	display(head);

	deletion(head,3); // Deletion in between
	display(head);

	return 0;
}