#include <stdio.h>
void main()
{
	int jz[200][200],n,m,i=0,j=0,f=1;
	char c1='!';
	printf("请输入矩阵(以输入‘/’为行结束标志，以输入‘？’为矩阵结束标志)：\n");
	do
	{
		j=0;
		do
		{
			scanf("%d",&jz[i][j]);
			scanf("%c",&c1);
			j++;
		}while(c1!='/'&&c1!='?');
		i++;
	}while(c1!='?');
	m=j;
	n=i;
	if(m!=n) printf("该矩阵不是方阵！\n");
	else
	{
	    for(i=0;i<n;i++)
	    for(j=0;j<m;j++) if(jz[i][j]!=jz[j][i]) f=0;
	    if(f) printf("该矩阵是对称矩阵！\n");
	    else printf("该矩阵不是对称矩阵！\n");
	}
}
