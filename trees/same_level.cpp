#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

struct node {
int data;
struct node *left;
struct node *right;
};

struct node* newnode(int x)
{
	struct node* head;
	head = (struct node *) malloc (sizeof(struct node));
	head->data = x;
	head->left = NULL;
	head->right = NULL;
	return head;
}

bool checklevel(struct node *root, int& level, int len)
{
	if(!root) return true;
	
	if(!root->left && !root->right) 
	{
		if(level !=INT_MAX && level!=len) return false;
		else
		{
			level = len;
			return true;
		}
	}
	
	else return (checklevel(root->left,level,len+1) & checklevel(root->right,level,len+1));
}


int main()
{
	//create tree
	struct node *root;
	int level = INT_MAX;
	root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->right->left = newnode(5);
	root->right->right = newnode(6);
	
	root->right->left->left = newnode(7);
	
	if(checklevel(root,level,0)) cout << "yes" <<endl;
	else cout << "no" << endl;
}
