#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	int pid,i=0;
	char s[80];
	/* fork a child process */
	while(1)
	{
		printf("Command-> ");
		pid = fork();
		if (pid == 0) {
		scanf("%s",s);
		system(s);
		}
		else {
			wait(NULL);
		}
	}
}

