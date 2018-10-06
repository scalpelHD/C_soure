#include <stdio.h>
#include<math.h>
int fun(int limit)
{
	int a[1000],i,j,k=0,f;
	for(i=2;i<=limit;i++)
	{
		f=1;
		for(j=2;j<=sqrt(i);j++) if(i%j==0) f=0;
		if(f)
		{
			k++;
			a[i-2]=i;
		} 
	}
	return k;
}
void main()
{
	int x,s;
	printf("ÇëÊäÈë·¶Î§£º");
	scanf("%d",&x);
	s=fun(x);
	printf("%d",s);
}
