#include<stdio.h>
#define N 200
void main()
{
	int a[N],b[N],i=-1,k,n,s=0,j=0;
	float av;
	printf("请输入数据（以0为结束标志）：\n");
	do
	{
		i++;
		scanf("%d",&a[i]);
	}while(a[i]!=0);
	k=i;
	n=k-1;
	for(i=0;i<k;i++) s+=a[i];
	av=(float)s/k;
	for(i=0;i<k;i++)
	{
		if(a[i]<av) 
		{
			b[j]=a[i];
			j++;
		}
		else 
		{
			b[n]=a[i];
			n--;
		}
	}
	for(i=0;i<k;i++) printf("%d\t",b[i]);
	printf("\n");
}
