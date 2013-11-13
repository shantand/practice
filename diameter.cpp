//find the diameter of a given binary tree
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
int diameter(treenode *root, int &l)
{
	if(!root) return 0;
	int left = diameter(root->left,l);
	int right = diameter(root->right,l);

	int d = left+right+1;	
	if(d>l) l=d;
	
	return (max(left,right)+1);
}

treenode * createtree()
{
	treenode *temp;
	temp = gettreenode(4);
	temp->left = gettreenode(3);
	temp->left->left = gettreenode(2);
	temp->left->right = gettreenode(4);
	temp->left->right ->left = gettreenode(3);
	temp->right = gettreenode(6);
	temp->right->right = gettreenode(7);	

	return temp;
}
int isHeightBalanced(treenode *root)
{
	if(!root) return 0;

	int left = isHeightBalanced(root->left);
	int right = isHeightBalanced(root->right);

	if(left==-1 || right == -1 || abs(left-right)>1) return -1;

	return (max(left,right) + 1);
}

int main()
{
	treenode * root;
	root = createtree();

	int l=0;
	int k = diameter(root,l);
	cout << "diameter is " << l << " " << endl;

	if(isHeightBalanced(root) != -1) cout << "Yes" <<endl;
	else cout << "NO" <<endl;
	return 0;
}