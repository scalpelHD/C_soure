//ËØÊı 
#include <stdio.h>
#include<math.h>
int sushu(int n)
{
	int a;
	for(a=2;a<=sqrt(n);a++) if(n%a==0) break;
	if(a<=sqrt(n)) return 0;
	else return 1;
}
void main()
{
	int k=0,i;
	for(i=2;i<=100;i++)
	{
		if(sushu(i))
		{
			k++;
			printf("%d\t",i);
			if(k%6==0) printf("\n");
		}
	}
	printf("\n");
 } 
