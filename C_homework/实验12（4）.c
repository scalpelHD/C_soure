#include<stdio.h>
int fun(int a[],int m)
{
	int i,j=0,s=0,k=0,below[1000];
	double av;
	for(i=0;i<m;i++) s+=a[i];
	av=(double)s/m;
	for(i=0;i<m;i++)
	{
		if(a[i]<av)
		{
			k++;
		    below[j]=a[i];
			j++;
		}
	}
	return k;
}
void main()
{
	int i=0,score[1000],m;
	char c='!';
	printf("请输入分数（以输入‘/’为结束标志）：");
	do
	{
		scanf("%d",&score[i]);
		scanf("%c",&c);
		i++;
	}while(c!='/');
	m=i;
	printf("%d\n",fun(score,m));
}
