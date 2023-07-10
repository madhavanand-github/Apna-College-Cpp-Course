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

node* mergeSorted2(node* &head1, node* head2){

	node* p1 = head1;
	node* p2 = head2;
	node* dummyNode = new node(-1);
	node* p3 = dummyNode;

	// Can compare only when both 
	while( p1 != NULL && p2 != NULL){

		if(p1 -> data < p2 -> data){
			p3 -> next = p1;
			p1 = p1 -> next;
		}
		else{
			p3 -> next = p2;
			p2 = p2 -> next;
		}
		p3 = p3 -> next;
	}

	// When any one empty
	while(p1 != NULL){
		p3 -> next = p1;
		p1 = p1 -> next;
		p3 = p3 -> next;
	}

	// When any one empty
	while(p2 != NULL){
		p3 -> next = p1;
		p2 = p2 -> next;
		p3 = p3 -> next;
	}

	return dummyNode -> next;
}

node* mergeSorted(node* &head1, node* &head2){

	node* ptr1 = head1;
	node* ptr2 = head2;
	node* res = NULL;

	while(ptr1 != NULL && ptr2 != NULL){

		if(ptr1 -> data < ptr2 -> data){
			insertAtTail(res, ptr1 -> data);
			ptr1 = ptr1 -> next;
		}
		else {
			insertAtTail(res, ptr2 -> data);
			ptr2 = ptr2 -> next;
		}

	}

	// When any one empty
	while(ptr1 != NULL){
		res -> next = ptr1;
		ptr1 = ptr1 -> next;
		res = res -> next;
	}

	// When any one empty
	while(ptr2 != NULL){
		res -> next = ptr1;
		ptr2 = ptr2 -> next;
		res = res -> next;
	}

	return res;

}

node* mergeRecursive(node* &head1, node* &head2){

	// Base Case
	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;
	
	// Recursive Case
	node* res;
	if(head1 -> data < head2 -> data){
		res = head1;
		res -> next = mergeRecursive(head1 -> next, head2);
	}
	else {
		res = head2;
		res -> next = mergeRecursive(head1, head2 -> next);
	}

	return res;
}

int main() {
	
	node* one1 = NULL;
	insertAtTail(one1, 1);
	insertAtTail(one1, 100);
	insertAtTail(one1, 1000);
	insertAtTail(one1, 10000);
	
	node* two2 = NULL;
	insertAtTail(two2, 5); 
	insertAtTail(two2, 10);
	insertAtTail(two2, 30);

	// display(mergeSorted(one1, two2));
	display(mergeRecursive(one1, two2));
	
	return 0;
}