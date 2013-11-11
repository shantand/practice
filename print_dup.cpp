#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

void remove_dup(string s,int length)
{
	int alpha[256] = {0};
	int i,j,maxi;
	string c="";
	
	for(i=0;i<length;i++) { alpha[s[i]] = 1; }
	
	j=0;
	for(i=0;i<length;i++) 
	{
		if(alpha[s[i]] == 1) { alpha[s[i]]=0; }
		else if (alpha[s[i]]!=-1) { cout << s[i] << " "; alpha[s[i]] = -1; } 
	}
}

int main()
{
	string s = "test string";
	//remove_dup(s,11);
	
	s.erase(s.begin()+4);
	cout <<s << endl;
}
