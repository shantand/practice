//check for children sum property
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
	temp = gettreenode(8);
	temp->left = gettreenode(3);
	temp->left->left = gettreenode(3);
	temp->right = gettreenode(5);
	temp->right->left = gettreenode(5);
	//temp->right->right = gettreenode(1);
	return temp;
}

int isSumtree(treenode *root)
{
	if(!root) return 0;

	if(!root->left && !root->right) return root->data;

	int left = isSumtree(root->left);
	int right = isSumtree(root->right);

	if(left!=-1 && right!=-1 && left+right==root->data) return root->data;
	else return -1;
}

int main()
{
	treenode *root;
	root = createtree();

	if(isSumtree(root)!=-1) cout << "Yes" <<endl;
	else cout << "No" <<endl;
	return 0;
}