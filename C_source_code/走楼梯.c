#include <stdio.h>
void main()
{
	int i,a=1,b=2,c;
	for(i=2;i<20;c=a+b,a=b,b=c,i++);
	printf("һ����%d���߷���\n",b);
 } 
