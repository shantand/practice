//MERGE TWO SORTED LINKED LIST
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
	struct node *next;
}NODE;

struct node * getnode(int x)
{
	struct node * head;
	head = (struct node *) malloc (sizeof(struct node));
	head -> data = x;
	head->next = NULL;
	return head;
}

NODE * merge(NODE* head1, NODE* head2)
{

	if (!head1 && !head2) return NULL;
	
	NODE * head3;
	if(!head1) 
	{
		head3 = getnode(head2->data);
		head3->next = merge(head1,head2->next);
	}
	else if(!head2) 
	{	
		head3 = getnode(head1->data);
		head3->next = merge(head1->next,head2);
	}
	else
	{
		if(head1->data > head2->data)
		{
			head3 = getnode(head2->data);
			head3->next = merge(head1,head2->next);
		}			
		else
		{
			head3 = getnode(head1->data);
			head3->next = merge(head1->next,head2);
		}			
	}
	return head3;
}

void display(NODE *head)
{
	while(head)
	{
		cout << head->data	 << "->";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	NODE *head1,*head2,*head;
	head1 = getnode(1);
	head1->next = getnode(3);
	head1->next->next= getnode(5);
	
	head2 = getnode(2);
	head2->next = getnode(4);
	head2->next->next= getnode(6);

	head = merge(head1,head2);
	display(head);
	return 0;
}