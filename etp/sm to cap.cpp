#include<stdio.h>
main()
{
	char c;
	printf("enter a char");
	scanf("%c",&c);
	if(c>=97)
	{
		c=c-32;
		printf("%c",c);
	}
	else
	 {
	 	c=c+32;
	 	printf("%c",c);
	 	
	 	
	 	
	 }
}
