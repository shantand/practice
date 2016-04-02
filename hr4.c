#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//sieve of erathomas for N = 1,00,000
	int N,i,j;
	scanf("%d",&N);
	long long int input[N],sum=0;
	int numbers[N];
	int primes[N], prime_count=0; 

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
		
	for(i=0;i<N;i++) scanf("%lld",&input[i]);

	for(i=0;i<N;i++)
	{
		if (i + primes[0] >= N ) break;
		for(j=0; j< prime_count; j++)
		{
			//cout << primes[j] << endl;
			if(i+ primes[j] >= N) break;
			sum += (input[ i+primes[j] ] - input[i]);
		}
	
	}	
	printf("%lld\n",sum);
	return 0;
}