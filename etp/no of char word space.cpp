#include<stdio.h>
#include<string.h>
main()
{
	int a,b=0,c=1,l,i;
	char p[100];
	printf("enter string");
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(p[i]!=' ')
		continue;
		else
		{
			b++;
			c++;
		}
	}
	printf("no of charac=%d",l);
	printf("no of space=%d",b);
	printf("no of words=%d",c);
}
