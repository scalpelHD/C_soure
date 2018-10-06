#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("请输入3x3的矩阵：\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++) scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++) b[i][j]=a[j][i];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++) c[i][j]=a[i][j]+b[i][j];
	printf("输入的矩阵为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) printf("%-4d",a[i][j]);
		printf("\n");
	}
	printf("它的转置矩阵为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) printf("%-4d",b[i][j]);
		printf("\n");
	}
	printf("它们的和矩阵为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) printf("%-4d",c[i][j]);
		printf("\n");
	}
	printf("\n");
}


