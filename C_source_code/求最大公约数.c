#include <stdio.h>
int main(void)
{
	int n=0,t=0,k=0,m=0;
	while(n>=0)
	{ 
	  printf("请输入两个正整数（用逗号隔开）：\n");
	  scanf("%d,%d",&n,&m);
	  if(n>m)
    	{
		  t=n;
		  n=m;
		  m=t;	
	    }
	  while(n!=0)
	  {
		  k=m%n;
		  m=n;
		  n=k;
		
	  } 
	  printf("最大公约数为：%d\n",m);
    }
	  while(1);
	return 0;
}
	
