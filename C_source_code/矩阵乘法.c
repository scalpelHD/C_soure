#include <stdio.h>
void main()
{
	int a[100][100],b[100][100],c[100][100],i,j,h1,h2,l1,l2,k,s;
	char c1='!';
	printf("�������һ�������ԡ�/��Ϊ�н�����־���ԡ�?��Ϊ���������־����");
	do
	{
		j=0;
		do
		{
			scanf("%d",&a[i][j]);
			scanf("%c",&c1);
			j++;
		}while(c1!='/'&&c1!='?');
		i++;
	}while(c1!='?');
	l1=j;
	h1=i;
	printf("������ڶ��������ԡ�/��Ϊ�н�����־���ԡ�?��Ϊ���������־����");
	i=0;
	do
	{
		j=0;
		do
		{
			scanf("%d",&b[i][j]);
			scanf("%c",&c1);
			j++;
		}while(c1!='/'&&c1!='?');
		i++;
	}while(c1!='?'); 
	l2=j;
	h2=i;
	if(l1!=h2) printf("��������������ˣ�\n");
	else
	{
		for(i=0;i<h1;i++)
		for(j=0;j<l2;j++)
		{
			s=0;
			for(k=0;k<l1;k++)
			{
			s+=a[i][k]*b[k][j];	
			}
			c[i][j]=s;
		}
		for(i=0;i<h1;i++)
		{
			for(j=0;j<l2;j++) printf("%-4d",c[i][j]);
			printf("\n");
		}
		
	}
	printf("\n");
 } 
