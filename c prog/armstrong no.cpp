#include<stdio.h>
main()
{
	int i,n,sum=0,r;
	printf("enter a no");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		i=n%10;
		sum=sum+(i*i*i);
		n=n/10;
	}
	printf("sum is %d",sum);
	if(sum==temp)
	printf("\n no is armstrong");
	else
	printf("no is not armstrong");

}
