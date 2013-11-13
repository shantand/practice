//program to find all possible substrings
#include<iostream>

using namespace std;

void print(string s)
{
	cout << s << " ";
	int i=0,n;
	while(i<s.length())
	{
		if(i+1 < s.length() && s[i] != ' ' && s[i+1]!=' ') 
		{
				n = 10*(s[i]-'0') + (s[i+1] -'0') + 'a' -1;
				cout << (char)n; 
				i=i+2;
		}
		else if(s[i] != ' ')
		{
			n = s[i]-'0'+'a'-1;
			cout << (char)n; 
			i++;
		}
		else i++;

		 
	}
	cout << endl;
}

void allsub(string s,string curr,int length)
{
	if (length == 0) {//cout << curr << endl; return;
		print(curr); return;
	}

	allsub(s.substr(1), curr+s.substr(0,1)+" ", length-1);

	if(length>1 && s[0]<='2' && s[1]<='6')
	{
		allsub(s.substr(2),curr+s.substr(0,2)+" ",length-2);
	}
	
}

void allsubstr(string s,string curr,int length)
{
	int i;
	if (length == 0) {cout << curr << endl; return;}

	for(i=1;i<=length;i++)
	{
		allsub(s.substr(i), curr+s.substr(0,i)+" ", length-i);
	}
	

	
}

int main()
{
	string s = "1234";
	allsub(s,"",4);
	//allsubstr(s,"",4);
}