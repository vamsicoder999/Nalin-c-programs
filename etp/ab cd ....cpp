#include<stdio.h>
main()
{
	int i;
	char k;
	for(i=1,k='A';i<=26;i++,k++)
	{
		printf("%c",k);
		if(i%2==0)
		printf(" ");
	}
}
