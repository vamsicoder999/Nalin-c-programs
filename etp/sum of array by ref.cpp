#include<stdio.h>
void sum(int* );
main()
{
   int a[10],i;
   for(i=0;i<10;i++)
     scanf("%d",&a[i]);
   sum(a);	
}
void sum(int *x)
{
	int s=0,j;
	for(j=0;j<10;j++)
	  {
	  	s=s+*x;
	  	x++;
	  }
	 printf("%d",s); 
}
