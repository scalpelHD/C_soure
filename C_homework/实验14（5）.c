#include <stdio.h>
void main()
{
	int s[1000],*p=s,sum=0,n=0;
	printf("请输入数组元素（以输入0为结束标志）：");
	do
	{
		scanf("%d",p++);
	}while(*(p-1)!=0);
	p=s;
	do
	{
		if(*p++>0) n++,sum+=*(p-1);
	}while(*(p-1)!=0);
	printf("正数平均值为%f。\n",(double)sum/n);
}
