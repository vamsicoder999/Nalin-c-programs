#include<stdio.h>
main()
{
	int i,n,j,l;
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(l=1;l<=i;l++)
		{
			printf("*");
		}
	}
}
