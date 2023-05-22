#include<stdio.h>
#include<malloc.h>

struct  node{
	int data;
	struct node*left;
	struct node*right;
};

struct node*createNode(int data)
{
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void preOrder(struct node*root){
	if(root!=NULL){
		printf("%d",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(struct node*root)
{
	if(root!=NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		printf("%d",root->data);
	}
}

void inOrder(struct node*root)
{
	if(root!=NULL){
		inOrder(root->left);
		printf("%d",root->data);
		inOrder(root->right);
	}
}

struct node*search(struct node*root,int key){
	if(root!=NULL){
		return NULL;
	}
	if(key==root->data){
		return root;
	}
	else if(root->data >key){
		return search(root->left,key);
	}
	else{
		return search(root->right,key);
	}
}



int main()
{
	struct node*p=createNode(5);
	struct node*p1=createNode(3);
	struct node*p2=createNode(2);
	struct node*p3=createNode(6);
	struct node*p4=createNode(7);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	
//	preOrder(p);
	
//	printf("\n");
//	postOrder(p);
	
//	printf("\n");
//	inOrder(p);

struct node*n=search(p,5);
if(n!=NULL){
	printf("found of : %d",n->data);
	}
else{
	printf("element was not found");
	}
	return 0;
}

