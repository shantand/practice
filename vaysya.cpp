#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

void print(int d,int k)
{
	if(d==0 && k==1) cout << d << endl;
	
	else if(d==0 && k>1) cout <<"No solution" << endl;
	
	else if(k==1) cout<< d << endl;
	
	else if(k==2) cout << "9" << d << endl;
	
	else {cout << 9; print(d,k-1);}
	
}

int main()
{
	int d,k;
	scanf("%d%d",&k,&d);
	print(d,k);
}
