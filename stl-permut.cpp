#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int i;
	vector <int> v;
	for (i=0;i<3;i++) v.push_back(i+1);
	
	do
	{
		for(i=0;i<3;i++) cout << v[i] << " ";
		cout << endl;
	}while(next_permutation(v.begin(),v.end()));
	return 0;
}
