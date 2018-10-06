#include <stdio.h>
#include<string.h>
void pai(char a[])
{
	int i,j,s,k;
	char t;
	s=strlen(a);
	for(i=0;i<s-1;i++)
	{
		k=i;
		for(j=i+1;j<s;j++) if(a[j]<a[k]) k=j;
		if(k!=i)
		{
			t=a[k];
			a[k]=a[i];
			a[i]=t;
		 } 
	}
 } 
void main()
{
	char s1[60],s2[20],s3[80];
	int s;
	printf("请输入第一个字符串：");
	fgets(s1,sizeof(s1),stdin);
	s1[strlen(s1)-1]=0;
	printf("请输入第二个字符串：");
	fgets(s2,sizeof(s2),stdin);
	s2[strlen(s2)-1]=0;
	strcpy(s3,strcat(s1,s2));
	pai(s3);
	puts(s3);
}
