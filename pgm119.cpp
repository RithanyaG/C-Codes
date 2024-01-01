/*
	program 119
	30.12.23
	non leap year count b|w l1 and l2
*/
#include <stdio.h>
main()
{
	int c,l1,l2,count=0;
	scanf("%d%d",&l1,&l2);
	for(c=l1;c<=l2;c++)
	{
		if(c%4==0)
			count++;
	}
	printf("%d",count);	
}
