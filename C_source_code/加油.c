#include <stdio.h>
#include<stdlib.h> 
int main(void)
{
	float x,discount,price,total;
	char y,z;
	while(x>=0)
	{
		printf("请选择所加汽油类型：\nA,a型汽油（3.25元/千克）\tB,b型汽油（3.00元/千克）\tC,c型汽油（2.75元/千克）\n");
		scanf("%c",&y);
		switch(y)
		{
			case 'A':price=3.25;break;
			case 'B':price=3.00;break;
			case 'C':price=2.75;break;
			default:printf("输入错误！\a\n");
		}
		printf("请选择服务类型：\nA,不需要服务\tB,自己加（优惠5%%！）\tC,协助加（优惠10%%！）\n");
		scanf(" %c",&z);
		switch(z)
		{
			case 'A':discount=0.00;break;
			case 'B':discount=0.05;break;
			case 'C':discount=0.10;break;
			default:printf("输入错误！\a\n");
		}
		printf("请输入加油重量(千克)：\n");
		scanf("%f",&x);
		total=x*price*(1-discount);
		printf("应付金额为%.2f元。\n欢迎下次使用！\a\n",total);
		fflush(stdin); 
	}
	while(1);
	return 0;
 } 
