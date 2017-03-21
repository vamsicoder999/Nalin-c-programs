#include<stdio.h>
main()
{
	char name[20],copy[20];
	int i=0,l=0,j,temp=0;
	printf("enter the name in small letters\n");
	gets(name);
	while(name[i]!='\0')
	{
		l=i++;
	}
	l++;
	printf("length of the string is %d",l);
	for(j=l-1,i=0;j>=0;j--,i++)
	{
		copy[i]=name[j];
	}
	copy[i]='\0';
	printf("\nreversed string\n");
	puts(copy);
	for(i=0;name[i]!='\0';i++)
	{
		if(copy[i]!=name[i])
		{
		  temp=1;
		  break;
	    }
	}
	if(temp==1)
	  printf("not palindrome");
	else
	  printf(" palindrome");  
}
