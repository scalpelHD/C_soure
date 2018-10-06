#include <stdio.h>
#include<stdlib.h>
#include <math.h>
void main()
{
	double a=1,b,c,d,x1,x2,q1,q2;
	while(a>0)
	{ 
	printf("ÇëÊäÈë·½³Ì£º\n");
	scanf("%lfx^2+%lfx+%lf=0",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
	  x1=(-b-sqrt(d))/(2*a);
	  x2=(-b+sqrt(d))/(2*a);
	  printf("x1=%.2lf,x2=%.2lf\n",x1,x2);
    }
    else
    {
    	q1=-b/(2*a);
    	q2=sqrt(fabs(d))/(2*a);
    	printf("x1=%.2lf+%.2lfi\n",q1,q2);
    	printf("x2=%.2lf-%.2lfi\n",q1,q2);
    }
    fflush(stdin);
    }
    while(1);
 } 
