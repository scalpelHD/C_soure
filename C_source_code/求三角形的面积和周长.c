#include <stdio.h>
#include<math.h>
int main(void)
 {
 	double a,b,c,d,s,area,e;
 	while(a>0)
 	{
 	printf("�����������ε����߳���\n");
 	scanf("%lf%lf%lf",&a,&b,&c);
 	if((a+b>c)&&(a+c>b)&&(b+c>a))
 	{
 	s=(a+b+c)/2;
 	e=a+b+c;
 	d=s*(s-a)*(s-b)*(s-c);
	area=sqrt(d);
	printf("��������ε������:%.2lf\t��������εĵ��ܳ���:%.2lf\n",area,e);
    }
    else
    printf("��������ݴ���\n\a");
    }
	while(1); 
	return 0; 
 }
