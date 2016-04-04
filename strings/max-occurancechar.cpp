#include<iostream>
#include<algorithm>
#include<cstdio>
#include<map>

using namespace std;

int main()
{
	string s;
	int i;
	map <char,int> mymap;
	
	mymap.clear();
	
	getline(cin,s);
	map <char,int> :: iterator it;
	
	for(i=0;i<s.length();i++)
	{
		if(mymap.find(s[i])!=mymap.end())
		mymap[s[i]] = mymap[s[i]] + 1;
		
		else mymap[s[i]] = 1;
	}
	int maxi = -1;
	char c;
	for(it=mymap.begin();it!=mymap.end();it++)
	{
		if(maxi < it->second)
		{
			maxi = it->second;
			c = it->first;
			//printf("%c %d\n",it->first,it->second);
		}
	}
	
	cout << c << " " << maxi << endl;
	return 0;
	
}
