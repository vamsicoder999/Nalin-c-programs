#include<stdio.h>
main()
{
	int i,j,n; 
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	}
}
