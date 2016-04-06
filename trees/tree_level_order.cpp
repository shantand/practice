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

void levelOrder(treenode* root, queue<treenode*> nodes)
{
	if(root==NULL) return;
	nodes.push(root);

	while(!nodes.empty())
	{
		treenode* current = nodes.front();
		cout << current->data << " ";

		if(current->left!=NULL)
			nodes.push(current->left);
		if(current->right!=NULL)
			nodes.push(current->right);
		nodes.pop();		
	}

}

void levelOrderSpiral(treenode* root, stack<treenode*> evenStack, stack<treenode*> oddStack)
{
	if(root==NULL) return;
	evenStack.push(root);
	
	while(!evenStack.empty() || !oddStack.empty())
	{
		while(!evenStack.empty())
		{
			treenode* current = evenStack.top();
			cout << current->data << " ";

			if(current->left!=NULL)
				oddStack.push(current->left);
			if(current->right!=NULL)
				oddStack.push(current->right);
		
			evenStack.pop();
		}

		while(!oddStack.empty())
		{
			treenode* current = oddStack.top();
			cout << current->data << " ";

			if(current->right!=NULL)
				evenStack.push(current->right);
			if(current->left!=NULL)
				evenStack.push(current->left);		

			oddStack.pop();
		}
	}
	
}

int main()
{
	queue<treenode*> nodes;
	treenode* root = createTree();

	cout << "\n Normal Level Order Traversal : " << endl;
	levelOrder(root,nodes);

	stack<treenode*> evenStack;
	stack<treenode*> oddStack;
	cout << "\n Spiral Level Order Traversal : " << endl;
	levelOrderSpiral(root,evenStack,oddStack);

	return 0;
}