#include<stdio.h>
void main()
{
	int a[3][4],b[3],max,i,j;
	printf("ÇëÊäÈë3x4µÄ¾ØÕó£º");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		max=a[i][0];
		for(j=0;j<4;j++) if(max<a[i][j]) max=a[i][j];
		b[i]=max;
	}
	for(i=0;i<3;i++) printf("%d\t",b[i]);
	printf("\n");
}