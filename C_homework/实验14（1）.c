#include <stdio.h>
void main()
{
	int a,b,*pa=&a,*pb=&b,*t;
	printf("����������������");
	scanf("%d%d",pa,pb);
	if(*pb>*pa) 
	{
		t=pa;
		pa=pb;
		pb=t;
	}
	printf("%d\t%d\t%d\t%f\n",*pa+*pb,*pa-*pb,(*pa)*(*pb),(double)*pa/(*pb));
 } 
