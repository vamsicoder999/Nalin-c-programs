#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter no");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n");
		for(j=n;j>=n-i+1;j--)
		{
			printf("*");
		}
	}
}
