#include <stdio.h>
int run(int x)
{
	if((x%4==0&&x%100!=0)||x%400==0) return 1;
	else return 0;
 } 
 void main()
 {
 	int i,k=0; 
 	for(i=1900;i<+2000;i++)
	{
	 	if(run(i))
	 	{
	 		printf("%d\t",i);
	 		k++;
	 		if(k%5==0) printf("\n");
		}
	} 	
 }
