#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

string remove_dup(string s,int length)
{
	int alpha[256] = {0};
	int i,j,maxi;
	string c="";
	
	for(i=0;i<length;i++) { alpha[s[i]] = 1; }
	
	j=0;
	for(i=0;i<length;i++) 
	{
		if(alpha[s[i]] == 1) { c+=s[i]; alpha[s[i]]=0; }
	}
	return c;
}

int main()
{
	string s = "test string";
	cout << s << endl;
	cout << remove_dup(s,11) << endl;
}
