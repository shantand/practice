#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#define no_of_chars 256

using namespace std;

void printStrings(string set1[], string pat,int no_of_strings)
{
	int alpha[no_of_chars] = {0};
	int i,j,k,count;
	
	for(k=0;k<pat.length();k++) alpha[pat[k]] = 1;
	
	for(i=0;i<no_of_strings;i++)
	{
		count =0;
		for(j=0;j<set1[i].length();j++) if(alpha[set1[i][j]]==1) { count++; alpha[set1[i][j]] = 0;}
		
		if(count==pat.length()) cout << set1[i] << endl;
		
		for(k=0;k<pat.length();k++) alpha[pat[k]] = 1;
		
	} 
}



int main()
{
	string set1[5] = {"maharashtra","karnataka","delhi","Andhra-pradesh","Uttar-pradesh"};
	string pat = "pradesh";
	
	printStrings(set1,pat,5);
	return 0;
}
