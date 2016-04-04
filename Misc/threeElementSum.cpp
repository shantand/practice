#include<iostream>
#include<cstdio>
#include<map>

using namespace std;
int main()
{
	int  i,j,k,n,triplet_count=0,x,y;
	long long int sum,jkSum;
	scanf("%d",&n);
	int numbers[n];
	map<int,int> m;
	for( int x=0; x<n; x++)
		scanf("%d",&numbers[x]);

	scanf("%lld",&sum);

	//we need to find all <j,k> such that
	// i<j<k and a[j]+a[k] = sum -a[i] --> jkSum

	for(x=0;x<n-2;x++)
	{
		jkSum = sum - numbers[x];
		if(jkSum < 0)
		{
			//printf("\n No triplets possible");
			continue;
		}

		//lets put remaining numbers in map.
		for(y=x+1;y<n;y++)
		{
			if(m.find(numbers[y]) != m.end())
				m[numbers[y]] = m[numbers[y]] + 1;

			else if(numbers[y] > numbers[x])
			{
				m[numbers[y]] = 1;
				printf("\n%d : %d",numbers[y],m[numbers[y]]);
			}			
		}
		printf("\n==================");

		for(y=x+1;y<n-1;y++)
		{
			if(m.find(numbers[y]) == m.end()) continue;
				
			m[numbers[y]] = m[numbers[y]] - 1;

			if(m.find(jkSum-numbers[y]) != m.end() && m[jkSum-numbers[y]] > 0)
				triplet_count += m[jkSum-numbers[y]];
		}
		m.clear();
	}
	printf("\n%d\n",triplet_count);
	return 0;
}