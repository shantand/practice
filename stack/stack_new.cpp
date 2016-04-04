#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <utility>

using namespace std;

typedef pair<string,int> age; 

int main()
{
	stack<age> mystack;
	for(int i=0;i<5;i++)
	{
		age a;
		a.first = "shantanu";
		a.second = i;
		mystack.push(a);
	}		
	
	for(int i=0;i<5;i++)
	{
		cout << mystack.top().first << endl;
		mystack.pop();
	}	

	return 0;
}
