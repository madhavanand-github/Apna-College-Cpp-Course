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

void reverse(Node* root){

	if(!root) return;

	reverse(root -> left);
	reverse(root -> right);

	swap(root -> left, root -> right);
}

void inorder(Node* root){

	if(!root) return;

	inorder(root -> left);
	cout << (root -> val) << " ";
	inorder(root -> right);
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

	reverse(root);
	inorder(root);
	
	
	return 0;
}