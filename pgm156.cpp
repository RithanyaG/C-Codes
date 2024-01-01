/*
	program 156
	31.12.23
	read text other than $, find upper/lower/digit/special ch
*/
#include <stdio.h>
main()
{
	char a[100];
	int i,l=0,u=0,d=0,s=0;
	for(i=0;(a[i]=getchar())!='$';i++)
	{
	}
	a[i]='\0';
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			u++;
		else  if(a[i]>='a' && a[i]<='z')
				l++;
			  else  if(a[i]>='0' && a[i]<='9')
						d++;
					else
						s++;
	}
	printf("%d,%d,%d,%d",u,l,d,s);
}
