#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node * next;
};

struct node * getnode(int x)
{
	struct node * temp;
	temp = (struct node*) malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
}


struct node * reverse(struct node *start, struct node *end)
{
	struct node *q;
	if(start==end) return start;
	
	q = reverse(start->next,end);
	q->next = start;
	start->next= NULL;
	return start;
}

struct node * createList()
{
	struct node *head,*first,*q,*start1,*end1,*start2,*end2;
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
	
	return first;
}


int main()
{

	int k,temp;
	struct node *head,*start1,*end1,*start2,*end2,*first,*q,*s;
	
	cin >> k;
	
	temp=k-1;
	head = createList();
		
	start1 = head;
	while(temp!=0 && head->next) { head=head->next; temp--; }
	end1 = head;
	first = end1;
	s = end1->next;
	q = reverse(start1,end1);
	
	
	while(s)
	{
		head = s;
		start2 = head;		
		temp =k-1;
		while(temp!=0 && head->next) { head=head->next; temp--; }
		end2 = head;
		q->next = end2;
		s = end2->next;
		q = reverse(start2,end2);
	}
	q->next = NULL;
	
	
	while(first) { cout << first->data << " "; first = first->next; }
	
	cout << endl;
	return 0;
}
