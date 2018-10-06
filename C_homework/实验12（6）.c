#include <stdio.h>
int isdiff(int n)
{
	int c,i,y[10]={0},f=1;
	do
	{
		c=n%10;
		n/=10;
		y[c]++;
	}while(n!=0);
	for(i=0;i<10;i++) if(y[i]>1) f=0;
	return f;
}
void main()
{
	int i,k,j=0,low,high,a,b,s[1000],q[100][2];
	printf("请输入区间下限和上限：");
	scanf("%d%d",&low,&high);
	a=low;
	for(i=0;i<=high-low;i++) s[i]=a++;
	for(i=0;i<=high-low;i++)
	{
		b=s[i]*s[i];
		if(isdiff(b))
		{
			q[j][0]=s[i];
			q[j][1]=b;
			j++;
		}
	}
	printf("x\tx*x\n");
	for(i=0;i<j;i++)
	{ 
	    for(k=0;k<2;k++) printf("%d\t",q[i][k]);
	    printf("\n");
	}
	printf("总数为%d\n",j);
 } 
