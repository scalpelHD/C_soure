#include <stdio.h>
#define N 200
void main()
{
	int n=0,num,i,max,min;
	double a[N],s=0;
	printf("��������и�����");
	scanf("%d",&num);
	printf("������÷֣�");
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
	printf("��ѡ�ֵ÷�Ϊ%f��\n",(s-max-min)/(n-2));
}