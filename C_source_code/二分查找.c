#include <stdio.h>
void bubble(int a[],int n);
int research(int a[],int n,int y);
void main()
{
	int a[10000],i,j,x,n;
	char c='!';
	i=0;
	printf("请输入数组(以输入‘/’为结束标志)："); 
	do
	{
		scanf("%d%c",&a[i],&c);
		i++;
	}while(c!='/');
	bubble(a,i);
	printf("排序后的数组为：");
	for(j=0;j<i;j++) printf("%-4d",a[j]);
	printf("\n请输入要查找的数：");
	scanf("%d",&n);
	x=research(a,i,n);
	if(x==-1) printf("该数组中没有这个数！\n");
	else printf("%d在该数组中第%d位！\n",n,x+1);
 } 
 int research(int a[],int n,int y)
 {
 	int low=0,high=n-1,mid;
 	while(low<=high)
 	{
 		mid=(low+high)/2;
 		if(y<a[mid]) high=mid-1;
 		else if(y>a[mid]) low=mid+1;
 		else return mid;
	 }
	 return -1;
 }
void bubble(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1]) 
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
	}
}
