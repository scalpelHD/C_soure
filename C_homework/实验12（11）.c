#include <stdio.h>
void main()
{
	int a[50][50],i=0,j=0,k,h,l,m,t;
	char c;
	printf("����������ԡ�/��Ϊ�н�����־���ԡ�����Ϊ���������־����\n");
	do
	{
		j=0;
		do
		{
			scanf("%d%c",&a[i][j],&c);
			j++;
		}while(c!='/'&&c!='?');
		i++; 
	}while(c!='?');
	h=i;
	l=j;
	printf("����ǰ�ľ���Ϊ��\n");
	for(i=0;i<h;i++)
	{
	    for(j=0;j<l;j++) printf("%-5d",a[i][j]);
	    printf("\n");
	}
	for(i=0;i<h;i++)
	{
		for(j=0;j<l-1;j++)
		{
			m=j;
			for(k=j+1;k<l;k++) if(a[i][k]<a[i][m]) m=k;
			if(m!=j)
			{
				t=a[i][m];
				a[i][m]=a[i][j];
				a[i][j]=t;
			}
		}
	}
	printf("�����ľ���Ϊ��\n");
	for(i=0;i<h;i++)
	{
	    for(j=0;j<l;j++) printf("%-5d",a[i][j]);
	    printf("\n");
	}
}
