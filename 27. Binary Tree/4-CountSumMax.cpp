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

int countNodes(Node* root){

	if(!root) return 0;
	
	return countNodes(root->left) + 1 + countNodes(root->right);
	
}

int sumNodes(Node* root){

	if(!root) return 0;
	
	return sumNodes(root -> left) + (root -> val) + sumNodes(root -> right);
}

int maxi(Node* root){

	if(!root) return 0;

	return max({maxi(root -> left), root->val, maxi(root -> right)});
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

	cout << countNodes(root) << endl;
	cout << sumNodes(root) << endl;
	cout << maxi(root) << endl;
	
	return 0;
}