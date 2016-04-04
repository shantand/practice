#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

char minimum(string s)
{
	char min = '9';
	for(int i=0;i<s.size();i++) if(s[i]<min) min = s[i];
	return min;
}

double printRecStrings(char* s, string prefix, int k, int len)
{
	if(k==0) { /*cout << prefix <<  " " << minimum(prefix)-'1' + 1<< endl;*/ return (minimum(prefix)-'1' + 1); }

	double sum = 0;
	for(int i=0;i<len;i++) 
	{ 
		sum += printRecStrings(s,prefix+s[i],k-1,len);
	}
	return sum;
}

double printKlengthStrings(char* s, int k, int len)
{
	return printRecStrings(s,"",k,len);	
}


int main()
{
	int m,k,n;
	cin >>n >> m >> k;
	char s[m];

	double sum=0;
	for(int i=0;i<m;i++) s[i]= '1'+ i;
	s[m] = '\0';		
	sum = printKlengthStrings(s,k,m);
	double avg = sum/pow(m,k);
	//cout << sum << " " << avg << endl;
	for(int i=1;i<=n;i++)
		cout << ((i-1)/k)*avg << endl;
	return 0;
}