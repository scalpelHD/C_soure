#include <stdio.h>
void main()
{
	int i=1,a=1;
	double e=1,b=1;
	while(b>1e-7)
	{
		a=a*i;
		b=1/(double)a;
		e+=b;
		i++;
    }
	printf("Êä³ö%.20f",e);
 } 
