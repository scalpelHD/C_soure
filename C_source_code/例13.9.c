#include <stdio.h>
#include <string.h>
void main()
{
	char (*p0)[20],str0[20][20],(*p1)[20],str1[20][20];
	int i,j=0,n;
	printf("请输入要输入的字符串数量：\n");
	scanf("%d",&n);
	fflush(stdin);
	printf("请输入字符串：\n");
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
	printf("结果是：\n");
	for(i=0,p1=str1;i<j;i++,p1++) puts(*p1);
}
