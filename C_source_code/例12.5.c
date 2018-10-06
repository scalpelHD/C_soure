#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5 
typedef struct user
{
	char name[10];
	char code[15];
}USER;
void main()
{
	FILE *fp;
	int i,j;
	USER su[N],rsu[N],*sp=su,*rp=rsu;
	if((fp=fopen("D:\\文件处理学习\\message.dat","wb+"))==NULL)//建立二进制文件进行读写
	{
		printf("can not open this file.\n");
		exit(0);
	}
	for(i=0;i<N;i++)
	{
		printf("Please input %dth user's name and code:",i+1);
		scanf("%s%s",su[i].name,su[i].code);
		for(j=0;j<strlen(su[i].code);j++) su[i].code[j]=su[i].code[j]^15;//密码加密 
	}
	fwrite(sp,sizeof(USER),N,fp);//将五位用户信息一次性写入文件
	rewind(fp);//重新将指针指向文件开头
	fread(rp,sizeof(USER),N,fp);//一次性读取信息
	for(i=0;i<N;i++) printf("%s\t%s\n",rsu[i].name,rsu[i].code);
	if(fclose(fp))
	{
		printf("can not close this file.\n");
		exit(0);
	}
 } 
