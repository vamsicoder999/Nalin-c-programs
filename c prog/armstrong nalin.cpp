#include<stdio.h>
main()
{
	int n,sum=0,a,r;
	a=n;
	printf("enter the no");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;	
		n=n/10;
	}
	printf("sum is %d",sum);
	if(a==sum)
	printf("no is armstrong");
	else
	printf("no is not armstrong");
}
