#include<iostream>
#include<cstdio>
using namespace std;

void create_pre(int post[],int start,int end)
{
	if (start>end) return;
	else if(start==end) printf("%d ",post[start]); 
	
	else
	{
		int node1 = post[end];
		int i=end-1;
		while(post[i]>node1) i--;
		
		printf("%d ",node1);
		create_pre(post,start,i);
		create_pre(post,i+1,end-1);
		
	}
}


int main()
{
	int post[3] = {20,40,30};
	create_pre( post,0,2 );
	printf("\n");
}
