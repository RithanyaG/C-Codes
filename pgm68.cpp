/*
	program 68
	18.12.23
	read numbers other than 1000 and calculate their sum
*/
#include <stdio.h>
main()
{
	int n,sum=0;
	scanf("%d",&n);
	while(n!=1000)
	{
		sum=sum+n;
		scanf("%d",&n);
	}
	printf("%d",sum);
}
