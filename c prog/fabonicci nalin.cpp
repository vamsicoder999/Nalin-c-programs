#include<stdio.h>
main()
{
	int i,a=0,b=1,c,n;
	printf("enter the no");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;	
	}
}
