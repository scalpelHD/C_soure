#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp;
	char str[100];
	int i=0;
	if((fp=fopen("D:\\�ļ�����ѧϰ\\test.txt","w"))==NULL)//���ļ�
	{
		printf("Can't open this file.\n");
		exit(0);
	}
	printf("input a string:\n");
	gets(str);
	while(str[i])
	{
		if(str[i]>='a'&&str[i]<='z') str[i]=str[i]-32;
		fputc(str[i],fp);
		i++;
	}
	if(fclose(fp))
	{
		printf("Can't close this file.\n");
		exit(0);
	}
 } 
