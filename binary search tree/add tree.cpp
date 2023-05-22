#include<iostream>
using namespace std;
 struct Node{
 	int key;
 	struct Node*left;
 	struct Node*right;
 
 };
 
 Node* newNode(int key)
{
    Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return (node);
}
 
 int sumBT(Node*root){
 	if(root==NULL){
 		return 0;
	 }
	 return (root->key+sumBT(root->left)+sumBT(root->right));
 }
 
 int main()
 {
 	Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
 
    int sum = sumBT(root);
    cout << "Sum of all the elements is: " << sum << endl;
 
    return 0;
 }
