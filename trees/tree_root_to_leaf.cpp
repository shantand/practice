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

void allPaths(treenode* root, string path)
{
	if(root->left ==NULL && root->right==NULL) 
		{ 
			path = path+(char)(root->data+'0');
			cout << path << endl;
			return;
		}
	allPaths(root->left,path+(char)(root->data+'0'));
	allPaths(root->right,path+(char)(root->data+'0'));
}

int main()
{
	treenode* root = createTree();
	allPaths(root,"");
	return 0;
}