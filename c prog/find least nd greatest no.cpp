#include<stdio.h>
main()
{
	int i,j,g=0,s=45,k,n;
	int a[10];
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>g)
		  g=a[i];
}
printf("greatest = %d",g);
for(i=0;i<n;i++)
{
	if(a[i]<s)
	  s=a[i];
}
printf("s=%d",s);

}
	
