#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],i=0,j=0,h,l,k;
	char c='!';
	printf("����������ԡ�/��Ϊ�н�����־���ԡ�?��Ϊ���������־����\n");
	do
	{
		j=0;
		do
		{
			scanf("%d",&a[i][j]);
			scanf("%c",&c);
			j++;
		}while(c!='/'&&c!='?');
		i++;
	}while(c!='?');
	h=i;
	k=h-1;
	l=j;
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			b[k][j]=a[i][j];
		}
		k--;
	}
	printf("����ľ���Ϊ��\n");
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
			printf("%-5d",a[i][j]);
		printf("\n");
	}
	printf("�����ľ���Ϊ��\n");
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++) printf("%-5d",b[i][j]);
		printf("\n");
	}
	printf("\n");
}

