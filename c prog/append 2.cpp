#include<stdio.h>
#include<process.h>
#include<conio.h>
main()
{
	char c;
	FILE *fp;
	fp=fopen("asdf.txt","a");
	if(fp==NULL)
	{
		printf("file not found");
		exit(1);
	}
	printf("\napeend upto '.'");
	fputc('\n',fp);
	while(c!='.')
	{
		c=getche();
		if(c=='.')     
		break;
		fputc(c,fp);
	}
	fclose(fp);
	printf("\nreading\n");
	fp=fopen("asdf.txt","r");
	while(!feof(fp))
	printf("%c",fgetc(fp));
}
