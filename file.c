#include<stdio.h>
int main()
{
	FILE*fp;
	fp=fopen("file1.txt","w");
	if(fp==NULL)
	{
		printf("file is not opened");
		return 0;
	}
	printf("file opened successfully");
	fclose(fp);
	return 0;
}
