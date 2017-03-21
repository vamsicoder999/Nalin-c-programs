#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(k=5-i;k>=1;k--)
			printf("  ");
		for(j=1;j<=i;j++)
		    printf("%d",j);
	}
	
}
