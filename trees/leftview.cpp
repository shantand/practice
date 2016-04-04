#include<iostream>
#include<algorithm>
#include<map>
#include<stdlib.h>
#include<vector>
#include<utility>
#include<math.h>
#include<queue>
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

void leftview(treenode *root, queue< treenode * >& q1, queue< treenode * >& q2)
{
	treenode *temp;
	while(!q1.empty() || !q2.empty())
	{
		if (!q1.empty()) 
		{
			temp = q1.front();
			cout << temp->data << endl;			
			while(!q1.empty())
			{
				if(temp->left)	q2.push(temp->left);
				if(temp->right) q2.push(temp->right);
				q1.pop();
				if(!q1.empty()) temp = q1.front(); 
			}
		}

		if (!q2.empty()) 
		{
			temp = q2.front();
			cout << temp->data << endl;			
			while(!q2.empty())
			{
				if(temp->left)	q1.push(temp->left);
				if(temp->right) q1.push(temp->right);
				q2.pop();
				if(!q2.empty()) temp = q2.front(); 
			}
		}
	}
}

int main()
{
	queue< treenode * > q1;
	queue< treenode * > q2;

	treenode *root;
	root = createtree();

	q1.push(root);
	leftview(root,q1,q2);
	return 0;
}