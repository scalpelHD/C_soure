#include <stdio.h>
int huiwen(int x)
{
	int a,b,c=0;
	b=x;
	do
	{
		a=b%10;
		b/=10;
		c=c*10+a;
	}while(b!=0); 
	if(x==c) return 1;
	else return 0;
 } 
 void main()
 {
 	int i,k=0;
 	for(i=10;i<=200;i++)
 	{
 		if(huiwen(i)) 
 		{
 			printf("%d\t",i);
 			k++;
 			if(k%5==0) printf("\n");
		 }
	 }
 }
