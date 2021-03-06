#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node* getnode(int x)
{
	struct node*temp;
	temp = (struct node *) malloc (sizeof(struct node));
	temp ->data = x;
	temp->left = NULL;
	temp->right = NULL;
}

struct node * createBST(int a[],int start, int end)
{
	if(start>end) return NULL;
	
	int mid;
	mid = (start+end)/2;
	
	struct node *root;
	root = getnode(a[mid]);
	
	root->left = createBST(a,start,mid-1);
	root->right = createBST(a,mid+1,end);
	
	return root;
}

void display(struct node *root)
{
	if (!root) return;
	
	cout << root->data <<endl;
	display(root->left);	
	display(root->right);
}

int main()
{
	int a[] = {1,2,3,4,5};
	struct node *root = createBST(a,0,4);
	display(root);
	return 0;
}
