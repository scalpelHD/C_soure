#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int i,j,x,a[100000],b[6],k=0;
	float c[2][6]={1,2,3,4,5,6};
	srand(time(NULL));
	for(i=0;i<100000;i++)
	{
		x=rand()%6+1;
		a[i]=x;
	}
	for(i=0;i<100000;i++)
	for(j=0;j<6;j++)
	{
		if(a[i]==j+1) b[j]++;
	}
	for(j=0;j<6;j++)
	c[1][j]=b[j]/100000.0;
	for(i=0;i<2;i++)
	for(j=0;j<6;j++)
	{
	    printf("|%-6f\t",c[i][j]);
	    if(j==5) printf("\n");
	}
}
