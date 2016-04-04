#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>
using namespace std;

typedef pair<string,int> person_age;

bool comp(const person_age& a, const person_age& b)
{
	return a.second < b.second;
}

int main()
{
	vector<person_age> persons;
	vector<person_age>::iterator it;
	for(int i=0;i<7;i++)
	{
		string s1 = "shantanu";
		s1 += ('0'+i);
		int age = i+50;
		person_age p;

		p.first = s1;
		p.second = age;
		persons.push_back(p); 
	} 
	
	sort(persons.begin(),persons.end(),comp);

	for(it=persons.begin(); it!=persons.end();it++)
	{
		cout << (*it).first << " " << (*it).second << endl;	
	} 
	return 0;
}