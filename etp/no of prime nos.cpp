#include<stdio.h>
main()
{
	int i,j,c,n;
	printf("enter the num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,c=0;j<=i;j++)
		{
			if(i%j==0)
			 c++;
		}
		if(c==2)
		 printf("%d \n",i);
	}
}
