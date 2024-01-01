/*
	program 120
	30.12.23
	read and display numbers other than 1000
*/
#include <stdio.h>
main()
{
	int n;
	for(scanf("%d",&n);n!=1000;scanf("%d",&n))
		printf("%d",n);	
}
