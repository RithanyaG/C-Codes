/*
	program 109
	23.12.23
	read and display a sentence
*/
#include <stdio.h>
main()
{
	char a[100];
	int i=0;
	scanf("%c",&a[i]);
	while(a[i]!='.')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i=i+1;
	}
}
