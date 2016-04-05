//SPOJ : http://www.spoj.com/problems/ARRAYSUB/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cmath>
#include<algorithm>	

using namespace std;

int main()
{
	// n - no of elements
	// k - subarray length
	int n,k;
	scanf("%d",&n);

	vector<int> input (n);
	vector<int>::iterator it;

	for(int i=0;i<n;i++)
		scanf("%d",&input[i]);

	scanf("%d",&k);
	it = input.begin();
	for(int i=0; i+k-1<n;i++)
	{
		printf("%d ",*max_element(it,it+k));
		it++;
	}
	return 0;
}