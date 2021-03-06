#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int majority(int a[],int length)
{
	int i=1,count,maj_index=0;
	
	count=1;
	while(i<length)
	{
		if(a[maj_index] == a[i]) count++;
		else count--;
		
		if(count==0) {maj_index=i; count=1;}
		i++;
	}
	
	return maj_index;	
}

int main()
{
	int a[] = {2,2,3,1,4,1,1,1,1};
	int x = majority(a,9);
	int count=0,i;
	for(i=0;i<9;i++)
		if(a[i] == a[x]) count++;
		
	if(count>4) printf("%d\n",a[x]);
	else printf("-1\n");
	return 0;
}
