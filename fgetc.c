#include<stdio.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("file1.txt","r");
if(fp==NULL)
{
	printf("file is not opened");
	return 0;
}
ch=fgetc(fp);
while(ch!=EOF)
{
	printf(" %c",ch);
	ch=fgetc(fp);
}
return 0;
}
