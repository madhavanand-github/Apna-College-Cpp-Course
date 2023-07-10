#include<bits/stdc++.h>
using namespace std;

class Node{

	public:
		int val;
		Node* left;
		Node* right;
	
	Node(int val){
		this->val = val;
		left = right = NULL;
	}
};

void sumRep(Node* &root){

	// Base Case
	if(!root) return;

	sumRep(root -> left);
	sumRep(root -> right);

	// Recursive Case
	if(root -> left) root -> val += root -> left -> val;
	if(root -> right) root -> val += root -> right -> val;
	
}

void preorder(Node* root){

	if(!root) return;
	cout << root -> val << " ";
	preorder(root -> left);
	preorder(root -> right);
}

int main() {
	
	// Making Binary Tree
	Node* root = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);

	root -> left -> left = new Node(4);
	root -> left -> right = new Node(5);

	root -> right -> left = new Node(6);
	root -> right -> right = new Node(7);

	sumRep(root);
	preorder(root);	
	
	return 0;
}