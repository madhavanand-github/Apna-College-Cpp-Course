#include<bits/stdc++.h>
using namespace std;

class Node{

	public:
		int val;
		Node* left;
		Node* right;
	
	Node(int data){
		val = data;
		left = right = NULL;
	}
};

int sumAtKthLevel(Node* root, int k){

	if(root == NULL) return -1;

	int sum = 0;
	int level = 1;

	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){

		Node* node = q.front();
		q.pop();

		if(node != NULL){
			if(level == k) sum += node -> val;
			if(node->left) q.push(node->left);
			if(node->right) q.push(node->right);
		}
		else {
			level++;
			if(!q.empty()) q.push(NULL);
		}
	}

	return sum;
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

	cout << sumAtKthLevel(root, 3);
	
	return 0;
}