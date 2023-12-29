/*
	program 18
	14.12.23
	division
*/
#include <stdio.h>
main()
{
	int a,b,r,q;
	float t;
	scanf("%d%d",&a,&b);
	r=a%b;
	q=a/b;
	t=(float)a/(float)b;
	printf("%d%d%f",r,q,t);
}
