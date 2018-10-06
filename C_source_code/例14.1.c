#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,sum,i,*p;
	printf("Please input the count of course:");
	scanf("%d",&n);
	if((p=(int*)calloc(n,sizeof(int)))==NULL)
	{
		printf("Not able to allocate memory.\n");
		exit(0);
	}
	printf("Please input %d course's credit:\n",n);
	for(i=0;i<n;i++) scanf("%d",p+i);
	sum=0;
	for(i=0;i<n;i++) sum=sum+*(p+i);
	printf("The total credit is :%d\n",sum);
	free(p);
}
