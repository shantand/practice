#include<iostream>
#include<algorithm>

using namespace std;


void reverse_words(string s)
{	
	int j=s.length()-1,i;
	i=j;
	while(i>=0)
	{
		while(i>=0 && s[i]!=' ') i--;
		cout << s.substr(i+1,j-i) << " ";
		j=i;
		i--;
	}	
}

int main()
{
	string s = "I like this program very much";
	reverse_words(s);
	cout << endl;
	return 0;
}
