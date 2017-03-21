#include<stdio.h>
main()
{
	int x,i,j,s=0;
	printf("enter size");
	scanf("%d",&x);
	int a[x][x];
	printf("enter elements");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		scanf("%d",&a[i][j]);
	}
		for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if((i+j)%2==0)
			 s=s+a[i][j];
		}
		printf("%d",s);
}}
