#include<iostream>
#include<algorithm>
#include<map>
#include<cstdio>

using namespace std;

int main()
{
	map<int,int> M;
	int a[7] = {1,2,3,1,2,4,10};
	int x = 10,i,flag=0;
	int size = sizeof(a)/sizeof(int);
	
	for(i=0;i<size;i++)
	{
		if(M.find(a[i])->second == 1) { flag=1; break; }
		M[x - a[i]] = 1;
	}
	if (flag == 1) printf("YES\n");
	else printf("No\n");
	return 0;
}
