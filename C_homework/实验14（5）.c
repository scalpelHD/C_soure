#include <stdio.h>
void main()
{
	int s[1000],*p=s,sum=0,n=0;
	printf("����������Ԫ�أ�������0Ϊ������־����");
	do
	{
		scanf("%d",p++);
	}while(*(p-1)!=0);
	p=s;
	do
	{
		if(*p++>0) n++,sum+=*(p-1);
	}while(*(p-1)!=0);
	printf("����ƽ��ֵΪ%f��\n",(double)sum/n);
}
