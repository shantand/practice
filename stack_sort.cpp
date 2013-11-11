#include<stack>
#include<iostream>
#include<algorithm>

using namespace std;

void R2(stack<int>& s,int x)
{
	if(s.empty()) { s.push(x); }
	
	else
	{
		int y = s.top();
		s.pop();
		if(y>x) { R2(s,x); s.push(y); }
		else {s.push(y); s.push(x);}
	}
}

void R1(stack<int>& s)
{
	if (s.empty()) return;
	else
	{
		int x;
		x = s.top();
		s.pop();
		R1(s);
		R2(s,x);
	}
}


int main()
{
	stack<int> s;
	s.push(3);
	s.push(1);
	s.push(2);
	s.push(4);
	R1(s);
	
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	return 0;
}
