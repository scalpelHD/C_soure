#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a=600,*p,**pp;
	p=&a;
	pp=&p;
	printf("a=%d,*p=%d,**pp=%d\n",a,*p,**pp);
}
