#include <stdio.h>
#include<string.h>
void main()
{
	char *p[10],pt[15][15],*t;
	int i=0,j=0,n1=0,n=0;
	printf("�������ÿ����ƣ���'q'Ϊ������־����\n");
	do
	{
		gets(pt[n1]);
		if(strcmp(pt[n1],"q")) p[n++]=pt[n1];
	}while(strcmp(pt[n1++],"q"));
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(p[i],p[j])>0) t=p[i],p[i]=p[j],p[j]=t;
		}
	}
	printf("����ǣ�\n");
	for(i=0;i<n;i++) puts(p[i]);
}
