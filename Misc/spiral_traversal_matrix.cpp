#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	int matrix[m][n];

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin >> matrix[i][j];

	int i=0,j=0,sum=0;
	while(sum<=m+n-2)
	{
		while(i+j == sum)
		{
			if(sum%2==0)
			{
				cout << matrix[i][j] << " ";
				if(i>=1 && j<n-1) { i--; j++; }
				else if(j<n-1) j++;
				else i++;
			}
			else
			{
				cout << matrix[i][j] << " ";
				if(i<m-1 && j>=1) { i++; j--; }
				else if(i<m-1) i++;
				else j++;
			}
		}
		sum++;
	}
	return 0;
}