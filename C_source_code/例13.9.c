#include <stdio.h>
#include <string.h>
void main()
{
	char (*p0)[20],str0[20][20],(*p1)[20],str1[20][20];
	int i,j=0,n;
	printf("������Ҫ������ַ���������\n");
	scanf("%d",&n);
	fflush(stdin);
	printf("�������ַ�����\n");
	for(i=0,p0=str0,p1=str1;i<n;i++)
	{
		gets(*p0);
		if(*(*p0)=='A'||*(*p0)=='a')
		{
			strcpy(*p1,*p0);
			p1++;
			j++;
		}
		p0++;
	}
	printf("����ǣ�\n");
	for(i=0,p1=str1;i<j;i++,p1++) puts(*p1);
}
