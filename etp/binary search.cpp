#include<stdio.h>
main()
{
	int n,i,s,c;
	printf("enter size");
	scanf("%d",&n);
	int a[n];
	printf("array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\nenter element");
	scanf("%d",&s);
	int l=0,u=n,m;
	for(i=0;i<n;i++)
	{
		m=(l+u)/2;
		if(s>a[m])
		l=m;
	     if(s<a[m])
		u=m;
		if (a[m]==s)
		c=1;
	}
	if(c==1)
	printf("\nfound");
	else
	printf("\n not found");
}
