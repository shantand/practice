#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main()
{
	//sieve of erathomas for N = 1,00,000
	int N, max_number = 100000,i,j;
	cin >> N;
	long long int input[N];
	int numbers[max_number];
	int primes[max_number], prime_count=0; 

	for(i=1;i<N;i++)
		numbers[i] = i;

	for(i=2;i<N;i++)
	{
		if (numbers[i] == 0) continue;
		j=2;
		primes[prime_count++] = i;
		while( j*i < N) 
		{
			numbers[j*i] = 0; j++;
		}
	}

	for(i=0;i<prime_count;i++)
		cout << primes[i] << ","; 

	cout << prime_count << endl;

	return 0;
}