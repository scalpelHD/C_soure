#include <stdio.h>
#define M 100
void main()
{
	int a[M][M],i,j,k,n;
	char c;
	printf("请选择形状：A 直角三角形\tB 等腰三角形\n");
	scanf("%c",&c);
	printf("请输入要输出的行数：");
	scanf("%d",&n);
	if(c=='B')
	{
		for(i=0;i<n;i++)
		{
			a[i][0]=1;
			a[i][i]=1;
		}
		for(i=2;i<n;i++)
		{
			for(j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++) printf("    ");
			for(j=0;j<=i;j++) printf("%8d",a[i][j]);
			printf("\n");
		}
	}
	if(c=='A')
	{
		for(i=0;i<n;i++)
		{
			a[i][0]=1;
			a[i][i]=1;
		}
		for(i=2;i<n;i++)
		{
			for(j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		} 
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++) printf("%-4d",a[i][j]);
			printf("\n");
		}
	} 
} 
