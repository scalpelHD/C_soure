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
	if((fp=fopen("D:\\�ļ�����ѧϰ\\bank.dat","wb+"))==NULL)
	{
		printf("can not open this fiel.\n");
		exit(0);
	}
	i=0;
	printf("Please input user's ID,name and money: ");
	scanf("%s",per.num);
	while(strcmp(per.num,"0"))//�������˺Ž����жϣ������Ƿ���ֹ���� 
	{
		scanf("%s%d",per.name,&per.mon);
		fwrite(p,sizeof(BANK),1,fp);
		i++;
		printf("Please input user's ID,name and money: ");
		scanf("%s",per.num); 
	} 
	system("cls");//���� 
	printf("Please input user's ID:");
	scanf("%s",num);
	fseek(fp,0,2);//��ָ��ָ���ļ�ĩβ
	n=ftell(fp)/sizeof(BANK);//�����ļ��ڵ��û��� 
	rewind(fp);//�ص��ļ���ͷ
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
