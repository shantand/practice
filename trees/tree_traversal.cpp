#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}treenode;

treenode* createNode(int value)
{
	treenode* root = (treenode *)malloc(sizeof(treenode));
	root->data = value;
	root->left = NULL;
	root->right = NULL;
	return root;
}

treenode* createTree()
{
	treenode* root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	return root;
}

void preOrder(treenode* root)
{
	if(root==NULL) return;
	cout << root->data << " ";
	preOrder(root->left);	
	preOrder(root->right);
}


void inOrder(treenode* root)
{
	if(root==NULL) return;	
	inOrder(root->left);	
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(treenode* root)
{
	if(root==NULL) return;	
	postOrder(root->left);	
	postOrder(root->right);
	cout << root->data << " ";
}

int main()
{
	treenode* root = createTree();

	cout << "\nInorder Traversal : " << endl;
	inOrder(root);
	cout << "\nPreorder Traversal : " << endl;
	preOrder(root);
	cout << "\nPostorder Traversal : " << endl;
	postOrder(root);

	cout << endl;
	return 0;
}