/*
	program 111
	30.12.23
	read text. find upper/lower/digit/special
*/
#include <stdio.h>
main()
{
	char a[100];
	int i=0,l=0,u=0,d=0,s=0;
	scanf("%c",&a[i]);
	while(a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]>=65 && a[i]<=90)
			u=u+1;
		else if(a[i]>=96 && a[i]<=122)
				l=l+1;
			 else if(a[i]>=48 && a[i]<=57)
			 		d=d+1;
			 	  else
			 	  	s=s+1;
		i=i+1;
	}
	printf("%d,%d,%d,%d",u,l,d,s);
}
