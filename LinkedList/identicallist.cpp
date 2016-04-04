//identical list
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
bool check(NODE * head1, NODE* head2)
{
	if(!head1 && !head2) return true;

	if(!head1 || !head2) return false;
	
	if(head1->data != head2->data) return false;

	return check(head1->next,head2->next);
}
int main()
{
	NODE *head1,*head2,*head;
	head1 = getnode(1);
	head1->next = getnode(2);
	head1->next->next= getnode(3);
	
	head2 = getnode(1);
	head2->next = getnode(2);
	
	if(check(head1,head2)) cout << "YES" << endl;
	else cout << "No" <<endl;
	return 0;
}