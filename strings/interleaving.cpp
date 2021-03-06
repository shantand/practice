#include<iostream>
#include<algorithm>

using namespace std;

void print_interleaving(string s1,string s2, string res)
{	
	int l,m;
	l = s1.length();
	m = s2.length();
	
	if(l==0 && m==0 ) {cout << res << endl;}
	
	else
	{
		if(l!=0) { res+=s1[0]; print_interleaving(s1.substr(1),s2,res); res.erase(res.end()-1);}
		
		if(m!=0) {res+=s2[0]; print_interleaving(s1,s2.substr(1),res); }
	}
}

int main()
{
	string s1 = "AB";
	string s2 = "CD";
	print_interleaving(s1,s2,"");
	return 0;
}
