#include<iostream>
#include<algorithm>

using namespace std;

int substring_no_repeat(string s)
{	
	int maxi=1,i,count;
	if (s== "") return 0;
	
	else
	{	
		i=1;count=1;
		while(i<s.length())
		{	
			if(s[i]!=s[i-1]) count++;
			else {count=1;}
			
			if(maxi<count) maxi=count;
			
			i++;
		}
	 return maxi;
	}
}

int main()
{
	string s="abbcd  accdef";
	cout << substring_no_repeat(s) <<endl;
	return 0;
}
