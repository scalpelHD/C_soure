#include <stdio.h>
int fun(int x)
{
	static int s=0;
	return s+=x;

 } 
 void main()
 {
 	int n,i=1,sum;
 	printf("«Î ‰»În£∫");
 	scanf("%d",&n);
 	for(;i<=n;i++) sum=fun(i);
 	printf("%d",sum);
 }
