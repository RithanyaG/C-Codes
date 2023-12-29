/*
	program 72
	18.12.23
	read numbers other than 1000 and find sum of +ve/-ve/0
*/
#include <stdio.h>
main()
{
	int n,ps=0,ns=0;
	scanf("%d",&n);
	while(n!=1000)
	{
		if(n>0)
			ps=ps+n;
		else 
			ns=ns+n;
		scanf("%d",&n);
	}
	printf(" %d %d ",ps,ns);	
}

