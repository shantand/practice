// direct i practice code
#include<iostream>
#include<algorithm>
#include<map>
#include<stdlib.h>
#include<vector>
#include<utility>
#include<math.h>
#include<string.h>

using namespace std;

bool check(int n, int o)
{
	if(o==1)
	{
		if(n>1 && n<10) return true;
		else return false;
	}
	bool flag;
	int i;
	for(i=2;i<10;i++)
	{
		if(n%i==0)
		if(check(n/i,o-1)) return true;		
	}
	return false;
}

int main()
{
	int n,o,num=1,i;
	cin >> n >> o;

	for(i=0;i<n;i++) num = num*10;

	while(!check(num-1,o)) num--;

	cout << num-1 <<endl;
	return 0;
}