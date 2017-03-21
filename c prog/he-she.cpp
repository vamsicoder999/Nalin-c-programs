#include<stdio.h>
#include<string.h>
main()
{
	int i,j,k,l,n;
	char a[50];
	char b[10]="she";
	printf("enter character");
	gets(a); 
	l=strlen(a);
	for(n=0;n<l;n++)
	{
			if(strstr(a,"he"))
			{
				for(i=n;i<=n;i++)
				a[i]="she";
				printf("%s",a);
			}
	}
	
}
