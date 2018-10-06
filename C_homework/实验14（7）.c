#include <stdio.h>
void main()
{
	int *p,s[10],m,n,i,j,t,k;
	printf("请输入升序排列的10个整数：");
	for(i=0;i<10;i++) scanf("%d",&s[i]);
	printf("请输入开始操作的位置：");
	scanf("%d",&m);
	printf("请输入操作的长度：");
	scanf("%d",&n);
	p=&s[m-1];
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++) if(*(p+j)>*(p+k)) k=j;
		if(i!=k)
		{
			t=*(p+k);
			*(p+k)=*(p+i);
			*(p+i)=t;
		}
	}
	for(i=0;i<10;i++) printf("%-4d",s[i]);
 } 
