#include <stdio.h>
int yinshu(int i)
{
	int a,b=0;
	for(a=1;a<i;a++) if(i%a==0) b+=a;
	return b;
}
void main()
{
	int i,k,m,c=0;
	for(i=2;i<=10000;i++)
	{
		k=yinshu(i);
		m=yinshu(k);
		if(i==c) continue;
		if(m==i&&i!=k) c=k,printf("%d\t%d\n",i,k);
	}
}
