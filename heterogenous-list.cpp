#include<iostream>
#include<stdlib.h>
#include<cstdio>

using namespace std;

struct intnode
{
	int data;
	void *next;
};

struct charnode
{
	char info;
	void *next;
};
int main()
{

	struct intnode* ihead;
	struct charnode* chead;
	void *p;
	
	ihead = (struct intnode*)malloc(sizeof(struct intnode));
	ihead->data = 2;
	ihead->next = NULL;
	
	chead = (struct charnode*)malloc(sizeof(struct charnode));
	chead->info = 'c';
	ihead->next = chead;
	chead->next = NULL;
	
	
	printf("%d\n",ihead->data);
	
	p	 = (struct charnode)ihead->next;
	printf("%c\n",p->info);
	return 0;
}
