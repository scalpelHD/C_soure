#include <stdio.h>
#include<math.h>
int main(void)
 {
 	double a,b,c,d,s,area,e;
 	while(a>0)
 	{
 	printf("请输入三角形的三边长：\n");
 	scanf("%lf%lf%lf",&a,&b,&c);
 	if((a+b>c)&&(a+c>b)&&(b+c>a))
 	{
 	s=(a+b+c)/2;
 	e=a+b+c;
 	d=s*(s-a)*(s-b)*(s-c);
	area=sqrt(d);
	printf("这个三角形的面积是:%.2lf\t这个三角形的的周长是:%.2lf\n",area,e);
    }
    else
    printf("输入的数据错误！\n\a");
    }
	while(1); 
	return 0; 
 }
