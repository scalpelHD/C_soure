#include <stdio.h>
#include<string.h>
void main()
{
	char t,a[40];
	int s,i,j;
	printf("ÇëÊäÈë×Ö·û´®£º");
	fgets(a,sizeof(a),stdin);
	a[strlen(a)-1]=0;
	s=j=strlen(a);
	for(i=0;i<s/2;i++)
	{
		t=a[j-1];
		a[j-1]=a[i];
		a[i]=t;
		j--;
	}
	puts(a);
 } 
