#include<stdio.h>
#define N 1000
void select(int a[],int n);
void print(int a[],int n);
void main()
{
	int b[N],n,i=-1;
	printf("����������(������0Ϊ������ע����");
	do
	{
		i++;
		scanf("%d",&b[i]);
	}while(b[i]!=0);
	n=i;
	select(b,n);
	print(b,n);
}
void select(int a[],int n)
{
	int i,j,k,m;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i]) k=j;
		}
		if(k!=i) 
		{
			m=a[k];
			a[k]=a[i];
			a[i]=m;
		}
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++) printf("%d\t",a[i]);
	printf("\n");
}


