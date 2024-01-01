/*
	program 128
	30.12.23
	read other than $, find count upper/lower/digit/special
*/
#include <stdio.h>
main()
{
	char c;
	int uc=0,lc=0,dc=0,sc=0;
	for(scanf("%c",&c);c!='$';scanf("%c",&c))
	{
		if(c>=65 && c<=90)
			uc++;
		else if(c>=97 && c<=122)
				lc++;
			 else if(c>=48 && c<=57)
					dc++;
				  else
				  	sc++;
	}
	printf("%d,%d,%d,%d",uc,lc,dc,sc);
}
