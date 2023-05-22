#include<iostream>
using namespace std;

struct Node{
	int key;
	struct Node*left;
	struct Node*right;
	Node(int k){
		key=k;
		left=right=NULL;
	}
};

int getMax(Node*root){
	if(root==NULL)
	return INT_MIN;
	else
	return max(root->key,max(getMax(root->left),getMax(root->right)));
}

int main(){
	Node*root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(80);
	root->left->right=new Node(40);
	root->right->right=new Node(50);
	
	cout<<getMax(root);
}
