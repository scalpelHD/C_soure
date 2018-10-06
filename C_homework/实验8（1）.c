#include <stdio.h>
int shuixian(int x)
{
	int a,b=0,c;
	c=x;
	do
	{
	a=c%10;
	c/=10;
	b+=a*a*a;
    }while(c!=0);
    if(b==x) return 1;
    else return 0;
 } 
 void main()
 {
 	int i,k=0;
 	for(i=100;i<1000;i++)
 	{
 		if(shuixian(i)) 
 		{
 			printf("%d\t",i);
 			k++;
 			if(k%5==0) printf("\n");
		 }
	 }
 }
