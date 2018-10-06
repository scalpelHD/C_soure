#include <stdio.h>
#include<math.h>
 int main()
 {
 	float x,sum=0,a,b=1;
 	int i,s=1;
 	printf("请输入要求正弦的数："); 
    scanf("%f",&x);
    a=x;
	for(i=1;a/b>1e-5;i++)
	{
		sum=sum+s*a/b;
		a=a*x*x;
		b=b*2*i*(2*i+1);
		s*=-1;
	}
	printf("sin%.0f=%f\n",x,sum);
	while(1)
	return 0;
 }
