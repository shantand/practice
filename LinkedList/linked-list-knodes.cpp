#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node * next;
};
 
struct node * reverse(struct node *start, struct node *end)
{
	struct node *q;
	if(start==end) return start;
	
	q = reverse(start->next,end);
	q->next = start;
	start->next= NULL;
	return start;
}

struct node* break_k_nodes(struct node * head, int k)
{
	int temp=k,x;
	struct node *end,*q,*r,*s;
	
	if(!head) return NULL;
	
	end = head;
	
	while(temp!=0 && end->next) {end = end->next; temp--;}
	
	s = end->next;
	r = reverse(head,end);
		
	r->next = break_k_nodes(s,k);
	
	return end;
	
}

struct node * getnode(int x)
{
	struct node * temp;
	temp = (struct node*) malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
}

int main()
{
	int k;
	struct node *head,*first,*q;
	head = getnode(1);
	first = head;
	head->next = getnode(2);
	head->next->next = getnode(3);
	head->next->next->next = getnode(4);
	
	head = head->next->next->next;
	
	head->next = getnode(5);
	head->next->next = getnode(6);
	head->next->next->next = getnode(7);
	head = head->next->next->next;
	
	cin >> k;
	q = break_k_nodes(first,k-1);
	
	while(q) { cout << q->data << " "; q = q->next; }
	cout << endl;
	return 0;
}
