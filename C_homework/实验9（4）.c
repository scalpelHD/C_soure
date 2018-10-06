#include <stdio.h>
#include<minfile.h>
void main()
{
	int a,b,c;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	printf("最小的数是%d。\n",min(c,min(a,b)));
}
