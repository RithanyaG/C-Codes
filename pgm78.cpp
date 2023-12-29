/*
	program 78
	21.12.23
	biggest and smallest of 10 numbers
*/
#include <stdio.h>
main()
{
	int c=1,n,small=1000,big=0;
	while(c<=10)
	{
		scanf("%d",&n);
		if(n>big)
			big=n;
		if(n<small)
			small=n;
		c=c+1;
	}
	printf(" %d %d",big,small);
}
