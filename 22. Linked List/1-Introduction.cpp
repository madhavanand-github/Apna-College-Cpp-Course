#include<bits/stdc++.h>
using namespace std;

// Fundamental Unit ✅
class node{

	public:
		int data;
		node* next;

	node(int val){
		data = val;
		next = NULL;
	}

};

// Insertion at Tail/End ✅
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

// Display ✅
void display(node* head){

	// Single Case : Covers base case of empty linked list
	while(head != NULL){
		cout << head -> data << " -> ";
		head = head -> next;
	}
	cout << "NULL" << endl;
}

// Insert At Head ✅
void insertAtHead(node* &head, int val){

	// Single Case : Covers base case of empty linked list
	node* n = new node(val);
	n -> next = head;
	head = n;
	
}

// Searching ✅
bool search(node* &head, int key){

	node* temp = head;
	while (temp != NULL){
		if(temp -> data == key) return true;
		temp = temp -> next;
	}
		
	return false;
}

int main() {
	
	node* head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	display(head);
	insertAtHead(head, 4);
	display(head);
	cout << search(head, 4) << endl;
	cout << search(head, 1) << endl;
	cout << search(head, 4130) << endl;

	return 0;
}