# include <stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	 int temp=n;
	while(n>0)
	{
		i=n%10;
		sum=sum+(i*i*i);
		n=n/10;
	}
	printf("sum is %d",sum);
	if (temp==sum)
	printf("\n no is angstrom");
	else
	printf(" \n no is not an angstrom");
}
