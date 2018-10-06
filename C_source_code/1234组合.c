#include <stdio.h>
void main()
{
	int i,j,k,x=0;
	for(i=1;i<5;i++)
	 for(j=1;j<5;j++)
	  for(k=1;k<5;k++)
	  {
	  	if(i!=j&&j!=k&&k!=i) 
		{
			printf("%d\t",i*100+j*10+k);
			x++;
	  	    if(x%5==0) printf("\n");
		}
	  }
 } 
