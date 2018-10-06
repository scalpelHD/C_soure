#include <stdio.h>
void main()
{
	int x,i=1,a=0;
	while(i<=1000)
	{
		if(i%3==2||i%5==3||i%7==2)
		{ 
		a++;
		printf("%d\t",i);
	    }
	    if(a%5==0) printf("\n"); 
	    i++;
	}
 } 
