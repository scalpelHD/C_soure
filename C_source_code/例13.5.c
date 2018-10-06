#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[5]={2,4,3,9,7};
	int *num[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
	int **p,i;
	p=num;
	for(i=0;i<5;i++) printf("%d\t",**p++);
}
