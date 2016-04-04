#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;

struct activity
{
	int start_time;
	int finish_time;
};

bool cmp(pair<int,int> s1, pair<int,int> s2)
{
	if(s1.second<s2.second) return true;
	return false;
}
int main()
{
	int n,i,t1,t2;
	pair <int,int> p;
	vector < pair<int,int> > jobs;
	vector < pair<int,int> > :: iterator it;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&t1,&t2);			
		p.first = t1;
		p.second = t2;		
		jobs.push_back(p);
	}
	//sort descending according to finish time
	
	sort (jobs.begin(), jobs.end(), cmp);
	
	//for(i=0;i<n;i++) printf("%d %d\n",jobs[i].start_time,jobs[i].finish_time);
	
	
	
	for(it=jobs.begin();it!=jobs.end();it++)
	{
		printf("%d %d \n",it->first,it->second);
	}
	
	return 0;
}
