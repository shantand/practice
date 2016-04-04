#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main()
{
	set<int> a;
	
	a.insert(2);
	a.insert(3);
	a.insert(12);
	a.insert(7);
	a.insert(8);
	a.insert(5);
	
	set<int>::iterator it;
	
	for(it=a.begin();it!=a.end();it++) cout << *it <<endl;
	
	return 0;
}
