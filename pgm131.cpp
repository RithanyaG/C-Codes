/*
	program 131
	30.12.23
	biggest and smallest of 10 numbers
*/
#include <stdio.h>
main()
{
	int n,i,big=0,small=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
	  	big=n>big?n:big;
	  	small=n<small?n:small;
	}
	printf("%d,%d",big,small);
}
