#include <stdio.h>
void main()
{
	int i,n,sum,j=0;
	for(n=1;n<=1000;n++)
	{
		sum=0;
		for(i=1;i<n;i++) if(n%i==0) sum+=i;
		if(sum==n) 
		{
			printf("%d\t",n);
			j++;
			if(j%5==0) printf("\n");
		 } 
	 } 
	 printf("\n");
}
