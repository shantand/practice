//Given an array and k find whether array has pair of elements whose sum is k
// has nlogn complexity can do much better if we know the max integer can occur

#include<iostream>
#include<algorithm>
#include<map>
#include<stdlib.h>
#include<vector>
#include<utility>
#include<math.h>
#include<string.h>
#include<set>

using namespace std;

bool check(int a[], int length, int k, set<int>& s)
{
	int i;
	for(i=0;i<length;i++)
	{
		if(s.find(a[i])!= s.end()) return true;

		else
			s.insert(k-a[i]);
	}
}

int main()
{
	int a[] = {2,3,4,5,6,2,2};

	set <int> s;
	s.empty();
	if(check(a,7,15,s)) cout << "yes" << endl;
	else cout << "No" <<endl;

 	return 0;
}