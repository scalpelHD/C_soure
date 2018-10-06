#include <stdio.h>
int main(viod)
{
	double a1,b1,c1,a2,b2,c2,d,e,f,g,h;
	while(a1>0)
	{ 
	printf("请输入方程组：\n");
	scanf("%lfx+%lfy+%lf=0\n%lfx+%lfy+%lf=0",&a1,&b1,&c1,&a2,&b2,&c2);
	if((a1/a2)==(b1/b2)&&(a1/a2)==(c1/c2))
	  printf("该方程组有无数解！\a\n");
	else
	  if((a1/a2)==(b1/b2)&&(a1/a2)!=(c1/c2))
	    printf("该方程组无解！\a\n");
	  else
	    {
	    	d=a1*b2-a2*b1;
	    	e=c1*b2-c2*b1;
	    	f=a1*c2-a2*c1;
	    	g=-e/d,h=-f/d;
	    	printf("x=%4.2lf\ny=%4.2lf\n",g,h);
		}
   }
    while(1);
	return 0;
 } 
