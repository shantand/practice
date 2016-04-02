#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int mismatchedChars (string s1, string s2)
{
	int length = s1.size();
	int mismatch = 0;
	for(int i=0;i<length; i++)
	{
		if(s1[i] != s2[i]) mismatch +=1;
	}
	return mismatch;
}

int main()
{
	int t,mismatch;
	cin >> t;
	string s1,s2;
	string temp;
	
	for(int m=0;m<t;m++)
	{
		cin >> s1 >> s2;
		int min_mismatch = 101; // 100 is max length
		temp = s1;
		for(int i=0;i<26;i++)
		{
			for(int j=0;j<s1.size(); j++)
			{
				if( s1[j]+i > 'z')
					temp[j] = 'a' + (s1[j] + i- 'z') -1;
				else
					temp[j] = s1[j] + i;

			}			

			mismatch =mismatchedChars(temp,s2);
			//cout << temp << " " << mismatch << endl;
			if(min_mismatch > mismatch) min_mismatch = mismatch;
		}
		cout << min_mismatch << endl;
	}
	return 0;
}