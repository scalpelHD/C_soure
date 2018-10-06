#include <stdio.h>
int he(int i)
{
	int a,b=0;
	do
	{
		a=i%10;
		b+=a;
		i/=10;
	}while(i!=0);
	return b;
 } 
void main()
 { 
    int i,k=0;
 	for(i=10;i<=1000;i++)
 	{
 		if(he(i)==5)
 		{
		  printf("%d\t",i);
		  k++;
 		  if(k%5==0) printf("\n");
 		} 
	}
 }
