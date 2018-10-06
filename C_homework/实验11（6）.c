#include<stdio.h>
void main()
{
	int a[3][4],b[3][4],i,j,s1=0,s2=0,x;
	printf("请输入上午八点每格书的数量：\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++) 
		{
			scanf("%d",&a[i][j]);
			s1+=a[i][j];
		}
	printf("请输入晚上九点每格书的数量：\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
			s2+=b[i][j];
		}
		x=s1-s2;
		if(x<0) printf("增加了%d本书。\n",-x);
		if(x==0) printf("书的数量既没有增加也没有减少。\n");
		if(x>0) printf("减少了%d本书。\n",x);
}