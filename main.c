#include<stdio.h>
#include<stdlib.h>

struct tp
{
	int a;
	char c;
}

main()
{
	static struct tp ab;
	printf("%c %d\n",ab.c,ab.a	);
}

int a()
{
	return(2.5);
}


