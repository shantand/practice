#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<algorithm>

using namespace std;

int rec(int a[])
{
	int l = sizeof(a)/sizeof(a[0]);
	
	cout << sizeof(a) << endl;
	cout << l << endl;
	if (l==1) return a[0];
	else if(l==2)
		return (max(a[0],a[1]));
	
	return (max (a[0]+rec(a+2), a[1]+rec(a+3)));
}

int main()
{
	int a[6] = {3,2,15,18,1,2};
	printf("%d\n",rec(a));
}
