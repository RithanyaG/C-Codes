/*
	program 155
	31.12.23
	read text other than $
*/
#include <stdio.h>
main()
{
	char a[100];
	int i;
	for(i=0,a[i]=getchar();a[i]!='$';a[++i]=getchar())
	{
	}
	a[i]='\0';
	for(i=0;a[i]!='\0';i++)
		putchar(a[i]);
}
