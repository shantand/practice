#include<iostream>
#include<cstdio>
#include<cstdlib>


struct node
{
	int value;
	struct node *next;
};

struct node * createNode(int value)
{
	struct node* root = (struct node *) malloc(sizeof(struct node));
	root->value = value;
	root->next = NULL;
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
	printf("\nYour Entered list is \n");
	while(first!=NULL)
	{
		printf("%d\n",first->value);
		first = first->next;
	}
	return 0;
}
