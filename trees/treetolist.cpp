//this is the program to convert given binary tree to DLL
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
treenode *firstNode(treenode *head)
{
	while(head->left) head=head->left;

	return head;
}
treenode *lastNode(treenode *head)
{
	while(head->right) head=head->right;

	return head;
}

treenode * treetolist(treenode *root, char dir)
{
	if(!root) return NULL;

	treenode *left_s,*right_s;
	left_s = treetolist(root->left,'l');
	right_s = treetolist(root->right,'r');

	root->left = left_s;
	root->right = right_s;

	if(root->left) root->left->right=root;
	if(root->right) root->right->left = root;

	if(dir=='l') return lastNode(root);
	if(dir=='r') return firstNode(root);
}

void display(treenode *head)
{
	while(head)
	{
		cout << head->data	 << "->";
		head = head->right;
	}
	cout << endl;
}

int main()
{
	treenode * root,*head;
	root = createtree();

	head = treetolist(root,'r');

	display(head);
	return 0;
}