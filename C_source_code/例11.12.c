#include <stdio.h>
#include <string.h>
#define N 30
typedef struct date
{
	int year;
	int month;
	int day;
}DATE;
typedef struct addrlist
{
	char name[15];
	char sex[2];
	DATE birthday;
	char qq[20];
}ADDRLIST;
void main()
{
	ADDRLIST addr[N];
	int i=0,j;
	int count=0;
	char c=' ';
	printf("������ͨѶ¼��Ϣ(����Ӣ��'/'Ϊ������־)��\n");
	while(1)
	{
		if(c=='/') break; 
		printf("������");
		gets(addr[i].name);
		fflush(stdin);
		printf("�Ա�");
		gets(addr[i].sex);
		fflush(stdin);
		printf("��������(�� �� ��)��");
		scanf("%d %d %d",&addr[i].birthday.year,&addr[i].birthday.month,&addr[i].birthday.day);
		fflush(stdin);
		printf("QQ��");
		gets(addr[i].qq);
		i++;
		fflush(stdin);
		c=getchar();	
	}
	system("cls");//����
	printf("����	�Ա�	��������	QQ\n");
	for(j=0;j<i;j++)
	{
		printf("%-8s",addr[j].name);
		printf("%-2s",addr[j].sex);
		printf("\t%d-%d-%d",addr[j].birthday.year,addr[j].birthday.month,addr[j].birthday.day);
		printf("\t%s",addr[j].qq);
		printf("\n");
		if(addr[j].birthday.year>=1993&&strcmp("��",addr[j].sex)==0) count++;
	} 
	printf("1993����������������Ϊ��%d\n",count);
}
