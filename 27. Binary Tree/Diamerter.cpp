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
	return max(height(root -> left), height(root -> right)) + 1;
}

int diameter(Node* root){

	if(!root) return 0;

	int lheight = height(root);
	int rheight = hegiht(root);
	int currDiameter = lheight + rheight + 1;

	int ldiameter = diameter(root -> left);
	int rdiameter = diameter(root -> right);

	return max(currDiameter, max(ldiameter, rdiameter));

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
	
	return 0;
}