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
	int i,val,flag=0;
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
	
	head=first;
	while(head)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
	return 0;
}
