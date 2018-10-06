#include <stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c;
	while(a>=0)
	{ 
	printf("请输入底数和指数：\n");
	scanf("%lf%lf",&a,&b);
	c=pow(a,b);
	printf("%.2lf的%.2lf次方是%e\n",a,b,c);
    }
	while(1);
	return 0;
}

