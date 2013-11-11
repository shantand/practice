#include<iostream>
#include<cstdio>
using namespace std;

void create_post(int pre[],int start,int end)
{
	if (start>end) return;
	else if(start==end) printf("%d ",pre[start]); 
	
	else
	{
		int node1 = pre[start];
		int i=start+1;
		while(pre[i]<node1) i++;
		
		create_post(pre,start+1,i-1);
		create_post(pre,i,end);
		printf("%d ",node1);
	}
}


int main()
{
	int pre[7] = {30,20,10,15,50,40,60};
	create_post( pre,0,6 );
	printf("\n");
}
