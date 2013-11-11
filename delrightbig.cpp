
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

NODE * glist(NODE * head, int & maxval)
{
	if(!head->next) {maxval = head->data; return head; }

	head->next = glist(head->next,maxval);

	if(head->data < maxval) {NODE *temp = head->next; free(head); return temp;}

	else {maxval=head->data; return head;}
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
	int maxval = 0;
	head1 = getnode(1);
	head1->next = getnode(7);
	head1->next->next= getnode(2);
	head1->next->next->next = getnode(5);
	head1->next->next->next->next = getnode(4);

	head = glist(head1,maxval);
	display(head);
	return 0;
}