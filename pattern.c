#include<stdio.h>

void main()
{
	int i,j,n,k,l=0;
	scanf("%d",&n);
	
		
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if (j>n) k=2*n-j;
			else k=j;
			
			if((i+k)>n && (i+k-n-1)%2==0) printf("%2d",l++);
			else printf("%2c",' ');
		}
		printf("\n");
		
	}
}
