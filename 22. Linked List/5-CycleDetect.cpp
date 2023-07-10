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

void makeCycle(node* &head, int key){

	node* temp = head;

	while(temp -> data != key)
		temp = temp -> next ;

	node* end = head;
	while(end -> next != NULL)
		end = end -> next;

	end -> next = temp;
}

void makeCyclePos(node* &head, int pos){

	node* end = head;
	node* startNode; // Where cycle starts

	int count = 1;
	while(end -> next != NULL){
		if(count == pos) startNode = end;
		end = end -> next;
		count++;
	}

	end -> next = startNode;
}

bool cycle(node* &head){

	node* slow = head;
	node* fast = head;

	while(fast != NULL && fast -> next != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;

		if(slow == fast)
			return true;
	}

	return false;
}

// Assuming the cycle is there
void removeCycle(node* &head){

	node* fast = head;
	node* slow = head;

	while(fast != NULL, fast -> next != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;

		if(fast == slow){
			break;
		}
	}

	slow = head;

	while(slow -> next != fast -> next){
		slow = slow -> next;
		fast = fast -> next;
	}

	fast -> next = NULL;
}

// Assuming the cycle is there
void removeCycle2(node* &head){

	node* fast = head;
	node* slow = head;

	// If used while, it is already equal
	do{
		slow = slow -> next;
		fast = fast -> next -> next;
	} while(slow != fast);

	slow = head;

	while(slow -> next != fast -> next){
		slow = slow -> next;
		fast = fast -> next;
	}

	fast -> next = NULL;
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
	makeCycle(head, 1);
	cout << cycle(head) << endl;
	removeCycle(head);
	cout << cycle(head) << endl;
	display(head);
	
	return 0;
}