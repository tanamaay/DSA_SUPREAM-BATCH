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
	
	int maxlevel=0;
	void printleft(Node*root,int level){
		if(root==NULL)
		return;
		if(maxlevel<level){
			cout<<(root->key)<<" ";
			maxlevel=level;
		}
		printleft(root->left,level+1);
		printleft(root->right,level+1);
	}
	
	void printleftView(Node*root){
		printleft(root,1);
	}
	
	int main()
	{
		Node*root=new Node(10);
		root->left=new Node(20);
		root->right=new Node(30);
		root->left->right=new Node(40);
		root->right->right=new Node(50);
		printleftView(root);
	}
