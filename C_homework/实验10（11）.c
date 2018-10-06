#include <stdio.h>
#define N 15
void main()
{
	int av,max,min,F[N]={1,1,0},sum,i;
	max=F[0],min=F[0];
	sum=F[0]+F[1]+F[2];
	for(i=3;i<N;i++)
	{
		F[i]=F[i-1]-2*F[i-2]+F[i-3];
		if(F[i]>max) max=F[i];
		if(F[i]<min) min=F[i];
		sum+=F[i];
	}
	printf("数列的前15项为："); 
	for(i=0;i<N;i++)
	printf("%-4d",F[i]);
	printf("\n"); 
	printf("最大值为：%d\n最小值为：%d\n平均值为：%f\n",max,min,sum/15.0);
 } 
