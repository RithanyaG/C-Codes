/*
	program 67
	18.12.23
	read and display numbers other than 1000
*/
#include <stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	while(n!=1000)
	{
		printf(" %d ",n);
		scanf("%d",&n);
	}
}
