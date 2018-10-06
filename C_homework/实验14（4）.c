#include <stdio.h>
void main()
{
	int i,n=0,max,s[10000],*p=s;
	char c;
	printf("请输入数组元素（以输入'/'为结束标志)；");
	do
	{
		scanf("%d%c",p++,&c);
		n++;
	}while(c!='/');
	p=s;
	max=*p;
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
		if(p[i]>max) max=*(p+i);
	}
	printf("\n该数组最大的元素为%d\n",max);
}
