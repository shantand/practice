#include<iostream>
#include<algorithm>

using namespace std;

void max_occ(string s)
{
	int alpha[256] = {0};
	int i,j,maxi;
	char max_char;
	
	for(i=0;i<s.length();i++) { alpha[s[i]] = alpha[s[i]]+1; }
	
	maxi=0;
	for(j=0;j<256;j++) if(alpha[j]>maxi) { maxi = alpha[j]; max_char = j; }
	
	cout<< max_char <<endl;
}

int main()
{
	string s = "test string";
	max_occ(s);
}
