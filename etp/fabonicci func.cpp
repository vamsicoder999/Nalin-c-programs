#include<stdio.h>
void fab(void);
main()
{
	fab();
}
void fab(void)
{
	int i,n,a=0,b=1,c;
	printf("enter");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
}
