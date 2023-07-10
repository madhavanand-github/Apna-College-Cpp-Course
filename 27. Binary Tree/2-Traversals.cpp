#include<bits/stdc++.h>
using namespace std;

class Node{

	public:
		int data;
		Node* left;
		Node* right;
	
	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

void preorder(Node* root){

	if(root == NULL) return;
	cout << root -> data << " ";
	preorder(root -> left);
	preorder(root -> right);
}

void inorder(Node* root){

	if(root == NULL) return;
	inorder(root -> left);
	cout << root -> data << " ";
	inorder(root -> right);
}

void inorderMirror(Node* root){

	if(root == NULL) return;
	inorderMirror(root -> right);
	cout << root -> data << " ";
	inorderMirror(root -> left);
}

void postorder(Node* root){
	
	if(root == NULL) return;
	postorder(root -> left);
	postorder(root -> right);
	cout << root -> data << " ";

}

void levelOrder(Node* root){

	if(root == NULL) return;

	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		Node* node = q.front();
		q.pop();
		if(node != NULL){
			cout << node -> data << " ";
			if(node->left) q.push(node->left);
			if(node->right) q.push(node->right);
		}
		else {
			cout << endl;
			if(!q.empty()) q.push(NULL);
		}
	}

}

// Without using NULL
void levelOrder2(Node* root){

	if(root == NULL) return;

	queue<Node*> q;
	q.push(root);

	while(!q.empty()){

		Node* node = q.front();
		q.pop();
		if(node->left) q.push(node->left);
		if(node->right) q.push(node->right);
		cout << node -> data << " ";
	}
}

int main() {
	
	Node* root = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);
	// root -> left -> left = new Node(4);
	root -> left -> right = new Node(5);
	root -> right -> left = new Node(6);
	root -> right -> right = new Node(7);

	preorder(root);
	cout << endl;

	inorder(root);
	cout << endl;

	inorderMirror(root);
	cout << endl;

	postorder(root);
	cout << endl;

	levelOrder2(root);
	cout << endl;

	levelOrder(root);
	
	return 0;
}