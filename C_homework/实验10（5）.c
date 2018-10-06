#include <stdio.h>
#define N 10
void main()
{
	int i,A[N],max1=-1,max2=-1;
	printf("请输入十个正整数："); 
	for(i=0;i<N;i++)
	scanf("%d",&A[i]);
	for(i=0;i<N;i++)
	{
	    if(A[i]%2==0) if(A[i]>max2) max2=A[i];
	    if(A[i]%2==1) if(A[i]>max1) max1=A[i]; 
	}
	if(max1==-1) printf("没有奇数！\n");
	else printf("最大的奇数为%d。\n",max1);
	if(max2==-1) printf("没有偶数！\n");
	else printf("最大的偶数为%d。\n",max2); 
 } 
