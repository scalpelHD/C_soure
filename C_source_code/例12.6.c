#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct bank
{
	char num[10];
	char name[10];
	int mon;
} BANK;
void main()
{
	FILE *fp;
	BANK per,*p=&per;
	int i,n,f=0;
	char num[10];
	if((fp=fopen("D:\\文件处理学习\\bank.dat","wb+"))==NULL)
	{
		printf("can not open this fiel.\n");
		exit(0);
	}
	i=0;
	printf("Please input user's ID,name and money: ");
	scanf("%s",per.num);
	while(strcmp(per.num,"0"))//对输入账号进行判断，决定是否终止输入 
	{
		scanf("%s%d",per.name,&per.mon);
		fwrite(p,sizeof(BANK),1,fp);
		i++;
		printf("Please input user's ID,name and money: ");
		scanf("%s",per.num); 
	} 
	system("cls");//清屏 
	printf("Please input user's ID:");
	scanf("%s",num);
	fseek(fp,0,2);//将指针指向文件末尾
	n=ftell(fp)/sizeof(BANK);//计算文件内的用户数 
	rewind(fp);//回到文件开头
	for(i=0;i<n;i++)
	{
		fread(p,sizeof(BANK),1,fp);
	 	if(strcmp(p->num,num)==0)
	 	{
	 		printf("%s\t%s\t%d",p->num,p->name,p->mon);
	 		f=1;
		}
	} 
	if(f==0) printf("Ivalid ID!\n");
	if(fclose(fp))
	{
	  	printf("can not close this file.\n");
	  	exit(0);
	} 
}
