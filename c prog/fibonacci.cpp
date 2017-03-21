#include<stdio.h>
main()
{
	int n,a,b,c,i;
	a=0;
	b=1;
	printf("enter the number\n ");
	scanf("%d",&n);
	printf("%d\n%d",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
}
