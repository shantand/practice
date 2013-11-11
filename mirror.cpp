//create the mirror of a tree
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
	temp = gettreenode(1);
	temp->left = gettreenode(2);
	temp->right = gettreenode(3);
	temp->right->left = gettreenode(4);
	temp->right->right = gettreenode(5);
	temp->right->right->left = gettreenode(6);

	return temp;
}

treenode * mirrortree(treenode *root, treenode *mroot)
{
	if(!root) return NULL;

	treenode *left_tree,*right_tree;
	mroot = gettreenode(root->data);
	
	left_tree = mirrortree(root->right,mroot->left);
	right_tree = mirrortree(root->left,mroot->right);

	mroot->left = left_tree;
	mroot->right = right_tree;

	return mroot;
}

void display(treenode *root)
{
	if(!root) return;

	cout << root->data<<endl;
	display(root->left);
	display(root->right);
}
int main()
{
	treenode *root,*mroot;
	root = createtree();

	mroot = mirrortree(root,NULL);

	display(mroot);
	return 0;
}