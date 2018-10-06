#include<stdio.h>
void bubble(int a[],int n);
void print(int a[],int n);
void main()
{
	int b[10000],m,i=0;
	printf("请输入数组（以输入0为结束标志）：");
	do
	{
		scanf("%d",&b[i]);
		i++;
	}while(b[i-1]!=0);
	m=i-1;
	bubble(b,m);
	print(b,m);
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
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++) printf("%d\t",a[i]);
	printf("\n");
}
