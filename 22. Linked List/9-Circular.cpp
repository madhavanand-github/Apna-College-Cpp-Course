#include<bits/stdc++.h>
using namespace std;

// Fundamental ✅
class node{

	public:
		int data;
		node* next;

	node(int val){
		next = NULL;
		data = val;
	}
};

// Insertion At Tail or End
void insertAtTail(node* &head, int val){

	node* n = new node(val);

	if(head == NULL){
		n -> next = n;
		head = n;
		return;
	}

	node* temp = head;

	while(temp -> next != head){
		temp = temp -> next;
	}

	temp -> next = n;
	n -> next = head;
}

void insertAtHead(node* &head, int val){

	node* n = new node(val);

	if(head == NULL){
		n -> next = n;
		head = n;
		return;
	}

	node* temp = head;

	while(temp -> next != head)
		temp = temp -> next;

	temp -> next = n;
	n -> next = head;
	head = n;

}

void display(node* &head){

	if(head == NULL){
		cout << "NULL" << endl;
		return;
	}
	
	node* temp = head;

	do{
		cout << temp -> data << " -> ";
		temp = temp -> next;
	} while(temp != head);

	cout << "END" << endl;
}

bool searchLL(node* &head, int key){

	if(head == NULL) return false;

	node* temp = head;

	do{
		if(temp -> data == key) return true;
		temp = temp -> next;
	}while(temp != head);

	return false;
}

void deletionAtLast(node* &head){

	if(head == NULL){
		cout << "EMPTY" << endl;
		return; 
	}

	node* temp = head;

	while (temp -> next -> next != head)
		temp = temp -> next;
	
	node* todelete = temp -> next;
	temp -> next = temp -> next -> next;
	delete todelete;

}



int main() {
	
	node* head = NULL;
	display(head); // null test
	cout << searchLL(head,10) << endl; // null test
	insertAtHead(head, 1); // null test
	cout << searchLL(head,10) << endl; // null test
	cout << searchLL(head,1) << endl; // null test
	display(head); // general
	insertAtHead(head, 2); // general
	display(head); // general
	insertAtHead(head, 3); // general
	display(head); // general
	deletionAtLast(head);
	display(head);

	cout << endl;

	node* head2 = NULL;
	display(head2); // null test
	insertAtTail(head2, 1); // null test
	display(head2); // general
	insertAtTail(head2, 2); // general
	display(head2); // general
	insertAtTail(head2, 3); // general
	display(head2); // general
	
	return 0;
}