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

void oddEven(node* &head){

	if(head == NULL) return;

	node* odd = head;
	node* even = head -> next;
	node* evenHead = head -> next;

	while (odd -> next != NULL && even -> next != NULL) {
		odd -> next = even -> next;
		odd = odd -> next; // also even -> next
		even -> next = odd -> next;
		even = even -> next;
	}
	
	odd -> next = evenHead;
	if(odd -> next == NULL) even -> next = NULL;
}

int main() {
	
	node* head = NULL;

	oddEven(head); // empty
	display(head); 

	insertAtTail(head, 1);
	oddEven(head); // 1 element
	display(head);
	
	insertAtTail(head, 2);
	oddEven(head); // 2 element
	display(head);

	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	oddEven(head); // 3 element
	display(head);
	
	return 0;
}