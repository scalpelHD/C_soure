#include <stdio.h>
void RTS(double innum,double ex_rate)
{
	double outnum;
	outnum=innum/ex_rate;
	printf("�ɶһ�%.2f��Ԫ\n",outnum);
}
void STR(double innum,double ex_rate)
{
	double outnum;
	outnum=innum*ex_rate;
	printf("�ɶһ�%.2f�����\n",outnum);
}
int main(void)
{
	char type;
	double innum,ex_rate;
	while(innum>=0)
	{ 
	printf("��ѡ��\nA.����Ҷһ���Ԫ\nB.��Ԫ�һ������\n");
	scanf("%c",&type);
	printf("������һ�����ͻ��ʣ��м��ö��Ÿ�������\n");
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
