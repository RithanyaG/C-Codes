/*
	program 122
	30.12.23
	read and find greatest of numbers other than 1000
*/
#include <stdio.h>
main()
{
	int n,greatest=0;
	for(scanf("%d",&n);n!=1000;scanf("%d",&n))
	{
		greatest=n>greatest?n:greatest;
	}
	printf("%d",greatest);	
}
