// rotate the matrix by 90
#include<iostream>
#include<algorithm>
#include<map>
#include<stdlib.h>
#include<vector>
#include<utility>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
	int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int temp1,temp2,count,inew,jnew,i,j,n;
	n=4;

	for(i=0;i<n/2;i++)
	{
		for(j=i;j<n-1-i;j++)
		{
			// cycle of 4 swaps to be carried out
			count = 4;
			temp1 = a[i][j];
			while(count-->0)
			{					
				inew = j;
				jnew = n-1-i;
				temp2 = a[inew][jnew];
				a[inew][jnew] = temp1;
				
				temp1 = temp2;i=inew;j=jnew;
			}
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			cout << a[i][j] <<" ";
		cout << endl;
	}
	return 0;
}
