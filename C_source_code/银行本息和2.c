#include <stdio.h>
#include<math.h>
double calsum(double money,double year,double ex_rate)
{
	double sum;
	sum=money*pow(1+ex_rate,year);
	return sum;
 } 
 int main(void)
 {
 	double sum,money,ex_rate;
 	int year;
 	while(money>=0)
 	{
 	  printf("���������Ԫ����");
	  scanf("%lf",&money);
	  printf("������������:");
	  scanf("%d",&year);
	  printf("�����������ʣ�");
	  scanf("%lf",&ex_rate); 
	  sum=calsum(money,ex_rate,year);
	  printf("%d���Ϣ��Ϊ��%.2fԪ\n",year,sum);
    }
    while(1);
	return 0; 
  } 
