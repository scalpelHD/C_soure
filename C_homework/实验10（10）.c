#include <stdio.h>
#define N 200
void main()
{
	int n=0,num,i,max,min;
	double a[N],s=0;
	printf("请输入裁判个数：");
	scanf("%d",&num);
	printf("请输入得分：");
	do
	{
		scanf("%lf",&a[n]);
		n++;
	}while(n!=num);
	max=min=a[1];
	for(i=0;i<n;i++)
	{
		s+=a[i];
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	printf("该选手得分为%f。\n",(s-max-min)/(n-2));
}