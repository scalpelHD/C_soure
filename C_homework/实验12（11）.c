#include <stdio.h>
void main()
{
	int a[50][50],i=0,j=0,k,h,l,m,t;
	char c;
	printf("请输入矩阵（以‘/’为行结束标志，以‘？’为矩阵结束标志）：\n");
	do
	{
		j=0;
		do
		{
			scanf("%d%c",&a[i][j],&c);
			j++;
		}while(c!='/'&&c!='?');
		i++; 
	}while(c!='?');
	h=i;
	l=j;
	printf("处理前的矩阵为：\n");
	for(i=0;i<h;i++)
	{
	    for(j=0;j<l;j++) printf("%-5d",a[i][j]);
	    printf("\n");
	}
	for(i=0;i<h;i++)
	{
		for(j=0;j<l-1;j++)
		{
			m=j;
			for(k=j+1;k<l;k++) if(a[i][k]<a[i][m]) m=k;
			if(m!=j)
			{
				t=a[i][m];
				a[i][m]=a[i][j];
				a[i][j]=t;
			}
		}
	}
	printf("处理后的矩阵为：\n");
	for(i=0;i<h;i++)
	{
	    for(j=0;j<l;j++) printf("%-5d",a[i][j]);
	    printf("\n");
	}
}
