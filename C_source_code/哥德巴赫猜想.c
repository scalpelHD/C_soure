#include <stdio.h>
#include<math.h>
int su(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) break;
	}
	if(i<=sqrt(x)) return 0;
	else return 1;
 }
void main()
 {
 	int m ,n;
 	printf("请输入一个大于6的偶数：");
	scanf("%d",&m);
	if(m<=6||m%2!=0) printf("输入数据错误！\n");
	else
	for(n=1;n<=m/2;n++)
	{
		if(su(n)&&su(m-n)) printf("%d=%d+%d\n",m,n,m-n);
	 } 
 } 
/*void main()
 {
 	int i,x,f;
 	for(i=1;i<21;i++)
 	{
 		f=1;
 		for(x=2;x<=sqrt(i);x++)
 		{
 			if(i%x==0) f=0;
		 }
		if(f==1) printf("%d\t",i);
	 }
 }*/
