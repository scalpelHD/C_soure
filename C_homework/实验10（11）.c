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
	printf("���е�ǰ15��Ϊ��"); 
	for(i=0;i<N;i++)
	printf("%-4d",F[i]);
	printf("\n"); 
	printf("���ֵΪ��%d\n��СֵΪ��%d\nƽ��ֵΪ��%f\n",max,min,sum/15.0);
 } 
