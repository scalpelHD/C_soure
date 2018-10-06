#include <stdio.h>
int fun(int n)
{
	static int sum=0,a=0;
	int i;
	for(i=a;i<=n;i++) sum+=i;
	a=n+1;
	return sum;
 } 
 void main()
 {
 	printf("%d\n",fun(10));
 	printf("%d\n",fun(20));
	printf("%d\n",fun(30)); 
 }
