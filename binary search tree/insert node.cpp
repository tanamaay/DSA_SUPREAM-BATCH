#include<stdio.h>
#include<malloc.h>

struct node{
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
void inOrder(struct node*root){
	if(root!=NULL){
		inOrder(root->left);
		printf("%d\n",root->data);
		inOrder(root->right);
	}
}

struct node*insert(struct node*root ,int key)
{
 if (root!= NULL)
        return root;
 
    
    if (key < root->data){
        root->left = insert(root->left, key);
        	}
    else if (key > root->data){

        root->right = insert(root->right, key);
        	} 
    return root;	
}
 int main()
 {
 	struct node*root=NULL;
 	root=insert(root,100);
 	root=insert(root,0);
 	root=insert(root, 50);
 	root=insert(root,10);
 	insert(root,90);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    // print inoder traversal of the BST
    printf("\n");
    inOrder(root);
    
 
    return 0;
 }


