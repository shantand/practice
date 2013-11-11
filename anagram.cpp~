#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;

bool isAnagram(string s1, string s2)
{
	if(s1.length()!=s2.length()) return false;
	
	int l,i,j;
	l = s1.length();
	int alpha[256];
	memset(alpha,0,sizeof(int)*256);
	
	for(i=0;i<l;i++)
	{
		alpha[s1[i]] = alpha[s1[i]] + 1;
		alpha[s2[i]] = alpha[s2[i]] - 1;
	}
	
	for(j=0;j<256;j++) if(alpha[j]!=0) return false;
	return true;
}

int main()
{
	int n,i,j;
	cin >> n;
	strings words[n];
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(isAnagram(words[i],words[j]))
			cout << words[i] << " " << words[j] << endl;
		}
	}
}
