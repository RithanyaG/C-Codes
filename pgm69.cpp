/*
	program 69
	18.12.23
	read numbers other than 1000 and find the greatest
*/
#include <stdio.h>
main()
{
	int n,greatest=0;
	scanf("%d",&n);
	while(n!=1000)
	{
		if(n>greatest)
			greatest=n;
		scanf("%d",&n);
	}
	printf("%d",greatest);
}
