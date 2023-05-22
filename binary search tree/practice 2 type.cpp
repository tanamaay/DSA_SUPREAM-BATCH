#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node*left;
	struct node*right;
};

struct node*createNode(int data){
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

void postOrder(struct node*root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
			printf("%d",root->data);
	}
}

void inOrder(struct node*root){
	if(root!=NULL){
		inOrder(root->left);
		printf("%d\n",root->data);
		inOrder(root->right);
	}
}

struct node*search(struct node*root,int key){
	if(root==NULL){
		return NULL;
	}
	if(root->data==key){
		return root;
	}
	else if(key< root->data){
		return search(root->left,key);
	}
	else{
		return search(root->right,key);
	}
}
struct node*searchIter(struct node*root,int key){
	while(root!=NULL)
	if(key==root->data){
		return root;
	}
	else if(key< root->data){
		root=root->left;
	}
	else{
		root=root->right;
	}
}



int main()
{
	  // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    struct node* n = searchIter(p, 10);
    if(n!=NULL){
    printf("Found: %d", n->data);
    }
    else{
        printf("Element not found");
    }
    return 0;
}
