#include <stdio.h>
#define M 3
#define N 4
void main()
{
	int a[M][N]={88,90,76,89,75,86,67,78,95,89,93,91};
	int i,(*p)[N]=a,j;
	double s=0;
	for (i=0;i<M;i++)
	{
		s=0;
		for(j=0;j<N;j++) s+=*(*p+j);
		p++;
		printf("The %dth student's score is %.2f.\n",i+1,s/4);
	}
 } 
