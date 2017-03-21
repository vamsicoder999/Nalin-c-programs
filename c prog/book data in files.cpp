#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>
main()
{
	int i;
	struct book
	{
		char name[20];
		int pages;
	};
	static struct book b[2];
	FILE *fp;
	fp=fopen("book.txt","w");
	if(fp==NULL)
	{
		printf("cannot open");
		exit(1);
	}
	printf("enter name nd pages of book");
	for(i=0;i<2;i++)
	{
	scanf("%s%d",b[i].name,&b[i].pages);
	fprintf(fp,"%s%d",b[i].name,b[i].pages);
}

	fclose(fp);
	fp=fopen("book.txt","r");
	printf("enter name of book\n");
	char nm[20];
	scanf("%s",nm);
if(fp==NULL)
{
	printf("cant open");
	exit(1);
}
else
{
	while(!feof(fp))
	for(i=0;i<2;i++)
	{
	fscanf(fp,"%s%d",b[i].name,&b[i].pages);
	if(stricmp(b[i].name,nm)==0)
	{
       printf("found\n");
		printf("%s%d",b[i].name,b[i].pages);
	}
	}
}
}
