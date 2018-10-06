#include <stdio.h>
#include<math.h>
void main()
{
	int i,j,k;
	for(i=1;i<20;i++)
	{
		for(j=1;j<=50-i;j++) printf(" ");
		for(k=1;k<=i*2-1;k++) printf("*");
		printf("\n");
	}
	for(i=18;i>0;i--)
	{
		for(j=1;j<=50-i;j++) printf(" ");
		for(k=1;k<=i*2-1;k++) printf("*");
		printf("\n");
	}
 } 
/* void main()
 {
 	int i,j,k,x=3;
 	for(i=1;i<8;i++)
 	{
 		for(j=1;j<=abs(x);j++) printf(" ");
 		for(k=1;k<=2*(4-abs(x))-1;k++) printf("*");
 		printf("\n");
 		x--;
	 }
 }*/
