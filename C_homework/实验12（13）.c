#include <stdio.h>
#define N 4
int findcount(int x[][N],int a[],int b[])
{
	int i,j,k,f,t=0,s=0,g=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(x[i][j]==0) g++;
			f=1;
			for(k=0;k<16;k++)
			{
				if(x[i][j]==a[k])
				{
					f=0;
					b[k]++;
				}
			}
			if(f)
			{
			    a[t]=x[i][j];
			    b[t]=1;
				t++;
			}
		}
	}
	if(g==0) return t;
	else
	{
		a[t]=0;
		b[t]=g;
		return t+1;
	}
 } 
void main()
{
	int i,m,x[][N]={5,6,6,7,1,6,3,7,1,6,6,7,6,6,7,7},a[16]={0},b[16]={0};
	m=findcount(x,a,b);
	for(i=0;i<m;i++) printf("%d:%d\t",a[i],b[i]);
	printf("\n");
 } 
