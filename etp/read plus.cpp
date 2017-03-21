#include<stdio.h>
#include<conio.h>
#include<process.h>
main()
{
	FILE *fp;
	char c;
	fp=fopen("collect.txt","r+");
	if(fp==NULL)
	{
		printf("cant open");
		exit(1);
    }
    printf("\nwrite and to stop press '.'");
    while(c!='.');
    {
    	c=getche();
    	fputc(c,fp);
	}
	fclose(fp);
}
