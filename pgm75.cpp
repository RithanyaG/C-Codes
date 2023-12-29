/*
	program 75
	18.12.23
	read other than $ and display count of upper/lower/digit/special
*/
#include <stdio.h>
main()
{
	char c;
	int uc=0,lc=0,dc=0,sc=0;
	scanf("%c",&c);
	while(c!='$')
	{
		if(c>=65 && c<=90)
			uc=uc+1;
		else if(c>=97 && c<=122)
				lc=lc+1;
			 else if(c>=48 && c<=57)
					dc=dc+1;
				  else
				  	printf("@%c:",c);
				  	sc=sc+1;  //considering enter as a special character!?
		scanf("%c",&c);
	}
	printf(" %d,%d,%d,%d ",uc,lc,dc,sc);
}
