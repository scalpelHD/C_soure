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
 	  printf("请输入存款本金（元）：");
	  scanf("%lf",&money);
	  printf("请输入存款年限:");
	  scanf("%d",&year);
	  printf("请输入存款利率：");
	  scanf("%lf",&ex_rate); 
	  sum=calsum(money,ex_rate,year);
	  printf("%d年后本息和为：%.2f元\n",year,sum);
    }
    while(1);
	return 0; 
  } 
