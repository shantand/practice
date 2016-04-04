/*
	returns the lexicographic position in all permutations 
	example:
	abc = 1
	acb = 2
	bac = 3
*/
#include<iostream>
#include<algorithm>

using namespace std;

int factorial(int x)
{
	if(x==0) return 1;
	return x*(factorial (x-1));
}

int rec(string s)
{
	if (s.empty()) return 0;
	int i,l,count;
	l = s.length();
	i=1;count=0;
	
	while(i<l)
	{
		if(s[0]>s[i]) count++;
		i++;
	}
	return (count*factorial(l-1)+ rec(s.substr(1)));
}

int main()
{
	string s = "bac";
	cout << rec(s) + 1 <<endl;
	return 0;
}
