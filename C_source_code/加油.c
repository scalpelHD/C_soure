#include <stdio.h>
#include<stdlib.h> 
int main(void)
{
	float x,discount,price,total;
	char y,z;
	while(x>=0)
	{
		printf("��ѡ�������������ͣ�\nA,a�����ͣ�3.25Ԫ/ǧ�ˣ�\tB,b�����ͣ�3.00Ԫ/ǧ�ˣ�\tC,c�����ͣ�2.75Ԫ/ǧ�ˣ�\n");
		scanf("%c",&y);
		switch(y)
		{
			case 'A':price=3.25;break;
			case 'B':price=3.00;break;
			case 'C':price=2.75;break;
			default:printf("�������\a\n");
		}
		printf("��ѡ��������ͣ�\nA,����Ҫ����\tB,�Լ��ӣ��Ż�5%%����\tC,Э���ӣ��Ż�10%%����\n");
		scanf(" %c",&z);
		switch(z)
		{
			case 'A':discount=0.00;break;
			case 'B':discount=0.05;break;
			case 'C':discount=0.10;break;
			default:printf("�������\a\n");
		}
		printf("�������������(ǧ��)��\n");
		scanf("%f",&x);
		total=x*price*(1-discount);
		printf("Ӧ�����Ϊ%.2fԪ��\n��ӭ�´�ʹ�ã�\a\n",total);
		fflush(stdin); 
	}
	while(1);
	return 0;
 } 
