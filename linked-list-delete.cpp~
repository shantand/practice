#include<iostream>
#include<stdlib.h>
#include<cstdio>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

int main()
{
	int i,val,flag=0,x;
	struct node *head,*first,*temp;
	
	while(scanf("%d",&val)!=EOF)
	{
		head = (struct node*) malloc(sizeof(struct node));
		head->data = val;
		head->next = NULL;
		
		if(flag==0) {first=temp=head; flag=1;}
		else
		{
			temp->next = head;
			temp = temp->next;
		}
	}
	
	printf("\nEnter the value to be deleted\n");
	scanf("%d",&x);
	
	
	
	head=first;
	//if first node is to be deleted
	
	if(head->data == x) {temp = head; head = head->next; free(temp); first=head;}
	
	// if node is to be deleted from any other position.
	else
	{
		while(head->next && (head->next)->data != x)
		{
			head = head->next;
		}
		if(head->next)
		{	
			temp = head->next;
			head -> next = temp->next;
			free(temp);			
		}
		
	}
	head=first;
	
	while(head)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
}
