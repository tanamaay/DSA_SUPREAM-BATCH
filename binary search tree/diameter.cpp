#include<iostream>
using namespace std;

struct node{
	int key;
	struct node*left;
	struct node*right;
	node(int k){
		key=k;
		left=right=NULL;
	}
};
int res=0;
int height(node*root){
	if(root==NULL)
	return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	res=max(res,1+lh+rh);
	return 1+max(lh,rh);
}

int main(){
	node*root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
	
	
	cout<<"height: "<<height(root)<<endl;
	cout<<"diameter:"<<res;
}
