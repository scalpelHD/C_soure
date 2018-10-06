#include <stdio.h>
void RTS(double innum,double ex_rate)
{
	double outnum;
	outnum=innum/ex_rate;
	printf("可兑换%.2f美元\n",outnum);
}
void STR(double innum,double ex_rate)
{
	double outnum;
	outnum=innum*ex_rate;
	printf("可兑换%.2f人民币\n",outnum);
}
int main(void)
{
	char type;
	double innum,ex_rate;
	while(innum>=0)
	{ 
	printf("请选择：\nA.人民币兑换美元\nB.美元兑换人民币\n");
	scanf("%c",&type);
	printf("请输入兑换数额和汇率（中间用逗号隔开）：\n");
	scanf("%lf,%lf",&innum,&ex_rate);
	if(type=='A')
	RTS(innum,ex_rate);
	else
	STR(innum,ex_rate);
	getchar();
    }
	while(1);
	return 0;
}
