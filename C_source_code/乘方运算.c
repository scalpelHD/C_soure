#include <stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c;
	while(a>=0)
	{ 
	printf("�����������ָ����\n");
	scanf("%lf%lf",&a,&b);
	c=pow(a,b);
	printf("%.2lf��%.2lf�η���%e\n",a,b,c);
    }
	while(1);
	return 0;
}

