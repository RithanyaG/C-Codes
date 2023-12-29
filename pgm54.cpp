/*
	program 54
	16.12.23
	word for a vowel
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	if(n=='a')
		printf("Apple");
	else if(n=='e')
			printf("Eagle");
		else if(n=='i')
		    	printf("Ice");
		     else if(n=='o')
					printf("Orange");
				  else if(n=='u')
							printf("Use");
						else
							printf("not a vowel");
}
