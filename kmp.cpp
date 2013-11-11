#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

void calculatelps(int* lps,string pattern,int n)
{
	int i,j,len=0;
	
	lps[0] = 0,i=1;
	
	while(i<n)
	{
		if(pattern[i] == pattern[len]) {len++;lps[i] = len; i++;}
		
		else
		{
			if(len!=0) len=lps[len-1];
			else {lps[i] = 0; i++; }
		}
	}
	
}

void kmp(string text, string pattern)
{
	int i,j,m,n,l;
	i=0,j=0,l=0;
	
	m=pattern.length();
	n=text.length();
	
	int *lps;
	lps = new int[m];
	calculatelps(lps,pattern,m);
	
	while(i<n)
	{
		if(pattern[j]==text[i]) {i++;j++;}
		
		if(j==m) {cout<<i-j<<endl; j=lps[j-1];}
		
		else if(pattern[j]!=text[i])
		{
			if(j!=0) j = lps[j-1];
			else i++;
		}
	}
}

int main()
{
	string pattern,text;
	cin>>pattern;
	cin>>text;
	
	kmp(text,pattern);
}
