#include<iostream>
#include<cstdio>
#include<utility>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

//int (*func[10])(float,char,char) = {NULL};

int main()
{
	/*map<char,char> s;
	s['a'] = 'A';
	
	if(s.find('a') != s.end())
	cout << s.find('a')->second << endl; 
	
		string c = "abb";
	cout << c.substr(0,1) << endl;
	
	vector < vector <string> > v(100);
	
	v[99].push_back("a");*/
	
	vector < pair<int,int> > v;
	pair <int,int> p1,p2,p3;
	
	p1.first = 1; p1.second=2;
	p2.first = 1; p2.second=1;
	p3.first = 1; p3.second=4;
	
	v.push_back( p1);
	v.push_back( p2 );
	v.push_back( p3);
	
	sort(v.begin(),v.end());
	
	vector < pair<int,int> > ::iterator it;
	
	for(it=v.begin();it!=v.end();it++)
	cout << it->first << " " << it->second <<endl;
	
	
	
return 0;
}
