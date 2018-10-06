#include <stdio.h>
void main()
{
	int A,B,C,D;
	char i;
	for(i='A';i<'E';i++)
	{
		A=(i!='A');
		B=(i=='C');
		C=(i=='D');
		D=(i!='D');
		if(A+B+C+D==3) printf("ะกอตสว%c!\n",i);
	}
 } 
