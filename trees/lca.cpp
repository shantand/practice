//Given a tree find LCA of two nodes if its a BST

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
	temp = gettreenode(4);
	temp->left = gettreenode(3);
	temp->left->left = gettreenode(2);
	temp->right = gettreenode(6);
	temp->right->left = gettreenode(5);
	temp->right->right = gettreenode(7);
	

	return temp;
}

bool isPresent(treenode * root,int x)
{
	if(!root) return false;

	if(root->data == x) return true;

	return (isPresent(root->left,x) | isPresent(root->right,x));

}

int findLCA(int x, int y, treenode *root)
{
	if (!root) return -1;

	else if(x < (root->data) && y<root->data)
		return findLCA(x,y,root->left);

	else if(x>(root->data) && y>root->data)
		return findLCA(x,y,root->right);

	else return root->data;
}

int main()
{
	treenode * root;
	int n;
	root = createtree();

	cin >> n;
	if(isPresent(root,2) && isPresent(root,6))
	cout << findLCA(2,6,root) <<endl;

	return 0;
}