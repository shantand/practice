#include<stdio.h>
#include <sys/types.h>
int main()
{
	if(fork() && fork())
	{
		fflush(stdout);
		fork();
	}
	if(fork() || fork())

	fork();

	printf("hello\n");
	return 0;
}
