#include <stdio.h>
#define N 20
void main()
{
	int a[N],k=0,z=0,f=0,i=0,s=0;
	printf("请输入一组非0整数(以输入0为结束标志)：");
	do
	{
		scanf("%d",&a[i]);
		k++;
		i++;
	}while(a[i-1]!=0);
	for(i=0;i<k;i++)
	{
		s=s+a[i]; 
		if(a[i]>0) z++;
		if(a[i]<0) f++;
	}
	printf("这组数据的平均值为%f。\n正数个数为%d。\n负数个数为%d。\n",s/(float)(k-1),z,f);
 } 
