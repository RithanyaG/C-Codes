/*
	program 121
	30.12.23
	read and sum numbers other than 1000
*/
#include <stdio.h>
main()
{
	int n,sum=0;
	for(scanf("%d",&n);n!=1000;scanf("%d",&n))
		sum+=n;
	printf("%d",sum);	
}
