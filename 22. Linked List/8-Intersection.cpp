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

bool intersection(node* &head1, node* &head2){

	int len1 = len(head1);
	int len2 = len(head2);
	
	int count = len1 > len2 ? len1-len2 : len2 - len1;
	node* ptr1 = head1;
	node* ptr2 = head2;

	// Put pointers to right position
	while (count){
	
		if(len1 > len2) 
			if(ptr1 == NULL) return false; 
			else ptr1 = ptr1 -> next;
		else if(ptr2 == NULL) return false; 
			else ptr2 = ptr2 -> next;
		count--;
	}
	
	while(ptr1 != NULL && ptr2 != NULL){

		if(ptr1 == ptr2) return true;
		ptr1 = ptr1 -> next;
		ptr2 = ptr2 -> next;
	}

	return false;
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

	node* head2 = NULL;
	insertAtTail(head2, 1);
	insertAtTail(head2, 2);

	// Creating intersection
	head2 -> next -> next = head -> next -> next;
	display(head2);

	// Bool Check
	cout << intersection(head, head2) << endl;

	// Both Non-intersecting empty List
	node* e1 = NULL;
	node* e2 = NULL;
	cout << intersection(e1, e2) << endl;

	return 0;
}