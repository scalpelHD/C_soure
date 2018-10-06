#include <stdio.h>
int fun(long n)
{
	int a,c=0;
	while(n!=0)
	{
	  a=n%10;
	  n/=10;
	  if(a%2==0) c=c*10+a;
    }
    return c;
 } 
void main()
{
	long x;
	printf("请输入一个整数：");
	scanf("%ld",&x);
	printf("%d",fun(x)); 
}
