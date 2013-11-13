//create a binary tree that maintains sum of children property
#include<iostream>
#include<algorithm>
#include<map>
#include<stdlib.h>
#include<vector>
#include<utility>
#include<math.h>
#include<string.h>

using namespace std;

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;	
} treenode;

treenode * gettreenode(int x)
{
	treenode *temp;
	temp = (treenode *) malloc (sizeof(treenode));
	temp->data = x;
	temp->left =NULL;
	temp->right=NULL;
}
treenode * createtree()
{
	treenode *temp;
	temp = gettreenode(100);
	temp->left = gettreenode(2);
	temp->left->left = gettreenode(4);
	temp->left->right = gettreenode(5);
	temp->right = gettreenode(3);
	//temp->right->left = gettreenode(5);
	//temp->right->right = gettreenode(7);
	

	return temp;
}
void addData(treenode *root, int x)
{
	//method to add difference to children
	root->data+=x;
	if(!root->left && !root->right) return;

	if(!root->left) addData(root->right,x);

	addData(root->left,x);
}

int sumtree(treenode *root)
{
	if(!root) return 0;

	if(!root->left && !root->right) return root->data;

	int left = sumtree(root->left);
	int right = sumtree(root->right);

	if(root->data <= left+right) root->data = left+right;

	else
	{
		int d = root->data-left-right;
		if(root->left) addData(root->left,d);
		else addData(root->right,d);
	}

	return root->data;
}
void display(treenode *root)
{
	if(!root) return;
	display(root->left);
	cout << root->data << endl;
	display(root->right);
}
int main()
{
	treenode *root;
	root = createtree();

	int k = sumtree(root);

	display(root);
	return 0;
}