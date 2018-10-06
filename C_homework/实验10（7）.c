#include <stdio.h>
#define N 4
void main()
{
	int a[N],b,c,i;
	printf("ÇëÊäÈëÃÜÎÄ£º");
	scanf("%d",&b);
	for(i=0;i<N;i++)
	{
		c=b%10;
		a[i]=c;
		b/=10;
	}
	for(i=0;i<N;i++) a[i]=(a[i]+5)%10;
	for(i=0;i<N;i++) printf("%d",a[i]);
}
