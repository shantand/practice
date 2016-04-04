#include<iostream>
#include<cstdio>
#include<cstdlib>


struct node
{
	int value;
	struct node *next;
	struct node *last;
};

struct node * createNode(int value)
{
	struct node* root = (struct node *) malloc(sizeof(struct node));
	root->value = value;
	root->next = NULL;
	root->last = NULL;
;	return root;
}

struct node* createLinkedList(int size)
{
	int val;
	struct node *root,*first,*prev;
	for(int i=0;i<size;i++)
	{
		if(i==0)
		{
			scanf("%d",&val);
			root = createNode(val);
			first  = prev = root;
		}
		else
		{
			scanf("%d",&val);
			root = createNode(val);
			root->last = prev;
			prev->next = root;
			prev = root;
		}	
	}
	return first;
}

int main()
{
	int total_nodes,val;
	printf("Tell me how many nodes you want : \n");
	scanf("%d",&total_nodes);	
	struct node* first = createLinkedList(total_nodes);
	printf("\nOnward traversal of your list is\n");
	while(first->next!=NULL)
	{
		printf("%d\n",first->value);
		first = first->next;
	}
	printf("%d\n",first->value);
	printf("\nReverse Traversal of your list is\n");
	while(first != NULL)
	{
		printf("%d\n",first->value);
		first = first->last;
	}

	return 0;
}
