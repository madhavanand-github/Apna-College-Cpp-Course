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

int height(Node* root){

	if(!root) return 0;

	return 1 + max(height(root -> left), height(root ->right));
}

bool exists(Node* root, int key){

	if(!root) return 0;

	return  (key == root -> val) 
		|| exists(root -> left, key)
		|| exists(root -> right, key);
}

int main() {
	
	// Making Binary Tree
	Node* root = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);

	root -> left -> left = new Node(4);
	root -> left -> right = new Node(5);

	root -> right -> left = new Node(6);
	root -> right -> right = new Node(790);

	cout << height(root) << endl;
	cout << exists(root, 6) << endl;
	
	return 0;
}