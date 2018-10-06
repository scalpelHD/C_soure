#include <stdio.h>
void calculate(double d1,char op,double d2)
{
	double y;
	switch(op)
	{
		case'+': y=d1+d2;printf("%.2f+%.2f=%.2f\n",d1,d2,y);break;
		case'-': y=d1-d2;printf("%.2f-%.2f=%.2f\n",d1,d2,y);break;
		case'*': y=d1*d2;printf("%.2f*%.2f=%.2f\n",d1,d2,y);break;
		case'/': y=d1/d2;printf("%.2f/%.2f=%.4f\n",d1,d2,y);break;
		default :printf("输入运算符错误！\n");
	}
}
int main(void)
{
	double d1,d2;
	int x=1;
	char op;
	while(x>0)
	{
	printf("请输入一个算式：\n");
	scanf("%lf%c%lf",&d1,&op,&d2);
	calculate(d1,op,d2);
    }
	while(1); 
	return 0;
}
